object DataModule2: TDataModule2
  Height = 826
  Width = 1420
  PixelsPerInch = 120
  object FDConnection1: TFDConnection
    Params.Strings = (
      'DataSource=BDTAXI'
      'DriverID=ODBC')
    Connected = True
    LoginPrompt = False
    Left = 40
    Top = 10
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from OPERATOR')
    Left = 140
    Top = 10
  end
  object DataSource1: TDataSource
    DataSet = FDQuery1
    Left = 230
    Top = 10
  end
  object FDQuery2: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'SELECT * FROM RAION R INNER JOIN LOCALITATE L ON R.RAION_ID=L.RA' +
        'ION_ID'
      'INNER JOIN STRADA S ON S.LOCALITATE_ID=L.LOCALITATE_ID')
    Left = 140
    Top = 80
  end
  object DataSource2: TDataSource
    DataSet = FDQuery2
    Left = 230
    Top = 80
  end
  object FDQuery3: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from LOCALITATE')
    Left = 140
    Top = 150
  end
  object DataSource3: TDataSource
    DataSet = FDQuery3
    Left = 230
    Top = 150
  end
  object DataSource4: TDataSource
    DataSet = FDQuery4
    Left = 230
    Top = 220
  end
  object FDQuery4: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from TIP')
    Left = 140
    Top = 220
  end
  object FDQuery5: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from CAROSERIE')
    Left = 140
    Top = 290
  end
  object DataSource5: TDataSource
    DataSet = FDQuery5
    Left = 230
    Top = 290
  end
  object DataSource6: TDataSource
    DataSet = FDQuery6
    Left = 230
    Top = 360
  end
  object FDQuery6: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from CULOARE')
    Left = 140
    Top = 360
  end
  object FDQuery7: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from MARCA')
    Left = 140
    Top = 430
  end
  object DataSource7: TDataSource
    DataSet = FDQuery7
    Left = 230
    Top = 430
  end
  object DataSource8: TDataSource
    DataSet = FDQuery8
    Left = 230
    Top = 500
  end
  object FDQuery8: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from MODEL where MARCA_ID=:MARCA_ID')
    Left = 140
    Top = 500
    ParamData = <
      item
        Name = 'MARCA_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object FDQuery9: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'SELECT * FROM AUTOMOBIL A INNER JOIN CAROSERIE C ON A.CAROSERIE_' +
        'ID=C.CAROSERIE_ID'
      #9#9#9#9#9#9'  INNER JOIN MODEL M ON M.MODEL_ID=A.MODEL_ID'
      #9#9#9#9#9#9'  INNER JOIN MARCA MM ON MM.MARCA_ID=M.MARCA_ID'
      #9#9#9#9#9#9'  INNER JOIN TIP T ON T.TIP_ID=A.TIP_ID'
      #9#9#9#9#9#9'  INNER JOIN CULOARE CC ON CC.CULOARE_ID=A.CULOARE_ID')
    Left = 140
    Top = 570
  end
  object DataSource9: TDataSource
    DataSet = FDQuery9
    Left = 230
    Top = 570
  end
  object DataSource10: TDataSource
    DataSet = FDQuery10
    Left = 230
    Top = 640
  end
  object FDQuery10: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from COMANDA')
    Left = 140
    Top = 640
  end
  object Inserare_Auto: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'INSERT INTO AUTOMOBIL(MODEL_ID,CULOARE_ID,CAROSERIE_ID,TIP_ID,NR' +
        '_AUTO,MOTOR,COMBUSTIBIL)'
      
        'VALUES(:MODEL_ID,:CULOARE_ID,:CAROSERIE_ID,:TIP_ID,:NR_AUTO,:MOT' +
        'OR,:COMBUSTIBIL)')
    Left = 370
    Top = 10
    ParamData = <
      item
        Name = 'MODEL_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CULOARE_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CAROSERIE_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'TIP_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'NR_AUTO'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'MOTOR'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'COMBUSTIBIL'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end>
  end
  object Update_Auto: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'UPDATE AUTOMOBIL SET'
      'MODEL_ID=:MODEL_ID,'
      'CULOARE_ID=:CULOARE_ID,'
      'CAROSERIE_ID=:CAROSERIE_ID,'
      'TIP_ID=:TIP_ID,'
      'NR_AUTO=:NR_AUTO,'
      'MOTOR=:MOTOR,'
      'COMBUSTIBIL=:COMBUSTIBIL'
      'WHERE AUTO_ID=:AUTO_ID')
    Left = 470
    Top = 10
    ParamData = <
      item
        Name = 'MODEL_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CULOARE_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'CAROSERIE_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'TIP_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'NR_AUTO'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'MOTOR'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'COMBUSTIBIL'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'AUTO_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object Delete_Auto: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'DELETE AUTOMOBIL'
      'WHERE AUTO_ID=:AUTO_ID')
    Left = 370
    Top = 80
    ParamData = <
      item
        Name = 'AUTO_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object Insert_Comanda: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        ' INSERT INTO COMANDA(AUTOMOBIL_ID, LOCALITATE_ID, OPERATOR_ID, N' +
        'OTA, ADRESA_DESTINATIE, PRET, KM, COST_KM)'
      
        #9#9#9' VALUES(:AUTOMOBIL_ID, :LOCALITATE_ID, :OPERATOR_ID, :NOTA, :' +
        'ADRESA_DESTINATIE, :PRET, :KM, :COST_KM)')
    Left = 370
    Top = 168
    ParamData = <
      item
        Name = 'AUTOMOBIL_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'LOCALITATE_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'OPERATOR_ID'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'NOTA'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'ADRESA_DESTINATIE'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'PRET'
        DataType = ftFloat
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'KM'
        DataType = ftFloat
        ParamType = ptInput
        Value = Null
      end
      item
        Name = 'COST_KM'
        DataType = ftFloat
        ParamType = ptInput
        Value = Null
      end>
  end
end
