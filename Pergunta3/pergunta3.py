import json
import xml.etree.ElementTree as ET

def read_json(filename):
    with open(filename, 'r') as file:
        return json.load(file)

def read_xml(filename):
    try:
        tree = ET.parse(filename)
        root = tree.getroot()
        dias = []
        for row in root.findall('row'):
            dia = int(row.find('dia').text)
            dias.append(dia)
        return dias
    except Exception as e:
        print(f"Erro ao ler o XML: {e}")
        return []

def main():
    faturamento_data = read_json('faturamento.json')
    dias = read_xml('dias.xml')

    faturamento = {item['dia']: item['valor'] for item in faturamento_data}


    revenue_values = [faturamento[day] for day in dias if day in faturamento and faturamento[day] > 0]


    if not revenue_values:
        print("Não há dias com faturamento.")
        return

    menor = min(revenue_values)
    maior = max(revenue_values)
    media = sum(revenue_values) / len(revenue_values)
    dias_acima_media = sum(1 for valor in revenue_values if valor > media)

    print(f"Menor valor de faturamento: {menor:.4f}")
    print(f"Maior valor de faturamento: {maior:.4f}")
    print(f"Número de dias acima da média: {dias_acima_media}")

if __name__ == '__main__':
    main()

