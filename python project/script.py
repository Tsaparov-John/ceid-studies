print("START HERE!!!111")
import requests as req

#NSA 2003-2006 //  GR & BG
with req.get('https://ec.europa.eu/eurostat/databrowser-backend/api/query/1.0/LIVE/xlsx/en/download/cf0502da-22f7-4f02-b97b-ecbbae007595') as rq:
    with open('nsa.xlsx','wb') as file:
        file.write(rq.content)

#NSB 2003-2006 //  GR & BG
with req.get('https://ec.europa.eu/eurostat/databrowser-backend/api/query/1.0/LIVE/xlsx/en/download/7e8af94e-dcbb-49af-9714-396458d35a41') as rq:
    with open('nsb.xlsx','wb') as file:
        file.write(rq.content)

#AAT2003-2006 //  GR & BG
with req.get('https://ec.europa.eu/eurostat/databrowser-backend/api/query/1.0/LIVE/xlsx/en/download/19c12315-0b09-4092-b407-ed0aebb990cb') as rq:
    with open('aat.xlsx','wb') as file:
        file.write(rq.content)

#AON 2003-2006 //  GR & BG
with req.get('https://ec.europa.eu/eurostat/databrowser-backend/api/query/1.0/LIVE/xlsx/en/download/b8c9ea31-63e0-4474-b2fc-f2306b66f3f4') as rq:
    with open('aon.xlsx','wb') as file:
        file.write(rq.content)        

