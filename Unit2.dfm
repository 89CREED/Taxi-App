object DataModule2: TDataModule2
  Height = 629
  Width = 1121
  object FDConnection1: TFDConnection
    Params.Strings = (
      'DataSource=BDTAXI'
      'DriverID=ODBC')
    Connected = True
    LoginPrompt = False
    Left = 8
    Top = 8
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from OPERATOR')
    Left = 88
    Top = 8
  end
  object DataSource1: TDataSource
    DataSet = FDQuery1
    Left = 160
    Top = 8
  end
  object FDQuery2: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from STRADA')
    Left = 88
    Top = 64
  end
  object DataSource2: TDataSource
    DataSet = FDQuery2
    Left = 160
    Top = 64
  end
  object FDQuery3: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from LOCALITATE')
    Left = 88
    Top = 120
  end
  object DataSource3: TDataSource
    DataSet = FDQuery3
    Left = 160
    Top = 120
  end
  object DataSource4: TDataSource
    DataSet = FDQuery4
    Left = 160
    Top = 176
  end
  object FDQuery4: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from TIP')
    Left = 88
    Top = 176
  end
  object FDQuery5: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from CAROSERIE')
    Left = 88
    Top = 232
  end
  object DataSource5: TDataSource
    DataSet = FDQuery5
    Left = 160
    Top = 232
  end
  object DataSource6: TDataSource
    DataSet = FDQuery6
    Left = 160
    Top = 288
  end
  object FDQuery6: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from CULOARE')
    Left = 88
    Top = 288
  end
  object FDQuery7: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from MARCA')
    Left = 88
    Top = 344
  end
  object DataSource7: TDataSource
    DataSet = FDQuery7
    Left = 160
    Top = 344
  end
  object DataSource8: TDataSource
    DataSet = FDQuery8
    Left = 160
    Top = 400
  end
  object FDQuery8: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from MODEL where MARCA_ID=:MARCA_ID')
    Left = 88
    Top = 400
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
    Left = 88
    Top = 456
  end
  object DataSource9: TDataSource
    DataSet = FDQuery9
    Left = 160
    Top = 456
  end
  object DataSource10: TDataSource
    DataSet = FDQuery10
    Left = 160
    Top = 512
  end
  object FDQuery10: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'Select * from COMANDA')
    Left = 88
    Top = 512
  end
  object Inserare_Auto: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      
        'INSERT INTO AUTOMOBIL(MODEL_ID,CULOARE_ID,CAROSERIE_ID,TIP_ID,NR' +
        '_AUTO,MOTOR,COMBUSTIBIL)'
      
        'VALUES(:MODEL_ID,:CULOARE_ID,:CAROSERIE_ID,:TIP_ID,:NR_AUTO,:MOT' +
        'OR,:COMBUSTIBIL)')
    Left = 88
    Top = 576
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
end
