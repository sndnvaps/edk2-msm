APRIORI DXE {

  #
  # PI DXE Drivers producing Architectural Protocols (EFI Services)
  #
  INF  MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF  MdeModulePkg/Core/Dxe/DxeMain.inf
  INF  MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF  MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF  MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF  ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF  ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF  EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF  ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  INF  MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF  MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF  MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf
  INF  MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
  INF  FatPkg/EnhancedFatDxe/Fat.inf

  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

!if $(SECURE_BOOT_ENABLE) == TRUE
  INF  SecurityPkg/VariableAuthenticated/SecureBootConfigDxe/SecureBootConfigDxe.inf
  INF  SecurityPkg/VariableAuthenticated/SecureBootDefaultKeysDxe/SecureBootDefaultKeysDxe.inf
!endif

  INF  MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF  EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF  MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF  EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF  MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF  MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF  MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF  MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  INF  MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF  Silicon/Qualcomm/QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
  
  INF  EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF  MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF  MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF  MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

  INF  MdeModulePkg/Universal/DisplayEngineDxe/DisplayEngineDxe.inf

}