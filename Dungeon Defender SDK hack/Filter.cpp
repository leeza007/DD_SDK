#include "Filter.h"
const char* filter[] = {
	"Function Engine.UIScreenObject.Initialized  ",                                                 // AltMissionNameLabel
	"Function Engine.UIScreenObject.PostInitialize  ",                                              // AltMissionNameLabel
	"Function Engine.AnimNode.OnBecomeRelevant  ",                                                  // AnimNodeBlend
	"Function Engine.AnimNode.OnCeaseRelevant  ",                                                   // AnimNodeBlend
	"Function Engine.UIScreenObject.ActivateKeyFrameCompletedDelegates  ",                          // BackgroundOverlay
	"Function Engine.UIScreenObject.UIAnimationEnded  ",                                            // BackgroundOverlay
	"Function Engine.UIScreenObject.UIAnimationStarted  ",                                          // BackgroundOverlay
	"Function UDKGame.UIButton_Scripted.ActiveStateChanged  ",                                      // BanPlayerButton
	"Function Engine.SequenceEvent.RegisterEvent  ",                                                // ButtonClickHandler
	"Function Engine.UIEvent.ShouldAlwaysInstance  ",                                               // ButtonClickHandler
	"Function UDKGame.UIScriptWidget_Button.RenderGame  ",                                          // CampaignButton
	"Function Engine.Canvas.DrawText  ",                                                            // CanvasObject
	"Function Engine.Canvas.Reset  ",                                                               // CanvasObject
	"Function Engine.Canvas.SetDrawColor  ",                                                        // CanvasObject
	"Function Engine.Canvas.SetPos  ",                                                              // CanvasObject
	"Function UDKGame.DunDefCagedPet.Tick  ",                                                       // DunDefCagedPet
	"Function Engine.Console.InputChar  ",                                                          // DunDefConsole
	"Function Engine.Console.InputKey  ",                                                           // DunDefConsole
	"Function Engine.Interaction.Tick  ",                                                           // DunDefConsole
	"Function Engine.Actor.PreBeginPlay  ",                                                         // DunDefEmitterSpawnable
	"Function Engine.Actor.SetInitialState  ",                                                      // DunDefEmitterSpawnable
	"Function UDKGame.DunDefEmitterSpawnable.DoCameraShake  ",                                      // DunDefEmitterSpawnable
	"Function UDKGame.DunDefEmitterSpawnable.OnParticleSystemFinished  ",                           // DunDefEmitterSpawnable
	"Function UDKGame.DunDefEmitterSpawnable.PostBeginPlay  ",                                      // DunDefEmitterSpawnable
	"Function UDKGame.DunDefForge.Tick  ",                                                          // DunDefForge
	"Function Engine.GameReplicationInfo.Timer  ",                                                  // DunDefGameReplicationInfo
	"Function UDKGame.DunDefGameReplicationInfo.Tick  ",                                            // DunDefGameReplicationInfo
	"Function UDKGame.DunDefHUD.PostRender  ",                                                      // DunDefHUD
	"Function Engine.Interaction.PostRender  ",                                                     // DunDefInput
	"Function Engine.LocalPlayer.PreHUDRender  ",                                                   // DunDefLocalPlayer
	"Function UDKGame.DunDefLocalPlayer.PostHUDRender  ",                                           // DunDefLocalPlayer
	"Function UDKGame.DunDefNPC_BarKeep.Tick  ",                                                    // DunDefNPC_BarKeep
	"Function DunDefPlayerCamera.OverTheShoulder.Tick  ",                                           // DunDefPlayerCamera
	"Function Engine.Camera.UpdateCamera  ",                                                        // DunDefPlayerCamera
	"Function UDKGame.DunDefPlayerCamera.CalculateSpinOffset  ",                                    // DunDefPlayerCamera
	"Function DunDefPlayerController.PlayerWalking.PlayerTick  ",                                   // DunDefPlayerController
	"Function Engine.PlayerController.ClientHearSound  ",                                           // DunDefPlayerController
	"Function Engine.PlayerController.GetFOVAngle  ",                                               // DunDefPlayerController
	"Function Engine.PlayerController.HearSoundFinished  ",                                         // DunDefPlayerController
	"Function Engine.PlayerController.NotifyLanded  ",                                              // DunDefPlayerController
	"Function Engine.PlayerController.PreRender  ",                                                 // DunDefPlayerController
	"Function UDKGame.DunDefPlayerController.ActivateCrystal  ",                                    // DunDefPlayerController
	"Function UDKGame.DunDefPlayerController.GetPlayerViewPoint  ",                                 // DunDefPlayerController
	"Function UDKGame.DunDefPlayerController.JumpPressed  ",                                        // DunDefPlayerController
	"Function UDKGame.DunDefPlayerController.JumpReleased  ",                                       // DunDefPlayerController
	"Function UDKGame.DunDefPlayerController.Pause  ",                                              // DunDefPlayerController
	"Function UDKGame.DunDefPlayerReplicationInfo.Timer  ",                                         // DunDefPlayerReplicationInfo
	"Function DunDefSpecial.DunDefPlayer_Jester.Tick  ",                                            // DunDefPlayer_Jester
	"Function UDKGame.DunDefPawn.BaseChange  ",                                                     // DunDefPlayer_Jester
	"Function UDKGame.DunDefPawn.PlayFootStepSound  ",                                              // DunDefPlayer_Jester
	"Function UDKGame.DunDefPlayer.Landed  ",                                                       // DunDefPlayer_Jester
	"Function UDKGame.DunDefSceneClient.PauseGame  ",                                               // DunDefSceneClient
	"Function UDKGame.DunDefUIController.InputKey  ",                                               // DunDefUIController
	"Function Engine.GameViewportClient.GetSubtitleRegion  ",                                       // DunDefViewportClient
	"Function Engine.GameViewportClient.LayoutPlayers  ",                                           // DunDefViewportClient
	"Function UDKGame.DunDefViewportClient.OnInputAxis  ",                                          // DunDefViewportClient
	"Function UDKGame.DunDefViewportClient.PostRender  ",                                           // DunDefViewportClient
	"Function UDKGame.DunDefViewportClient.Tick  ",                                                 // DunDefViewportClient
	"Function UDKGame.DunDefViewportInput.InputKey  ",                                              // DunDefViewportInput
	"Function DunDefWeapon_MagicStaff.Active.Tick  ",                                               // DunDefWeapon_MagicStaff
	"Function Engine.SequenceOp.Deactivated  ",                                                     // DunDef_SeqAct_AppPurchased
	"Function UDKGame.DunDef_SeqAct_AppPurchased.Activated  ",                                      // DunDef_SeqAct_AppPurchased
	"Function UDKGame.DunDef_SeqAct_LockContent.Activated  ",                                       // DunDef_SeqAct_LockContent
	"Function UDKGame.DunDef_SeqAct_SetNightmareUnlocked.Activated  ",                              // DunDef_SeqAct_SetNightmareUnlocked
	"Function UDKGame.DunDef_SeqAct_UnlockCostumes.Activated  ",                                    // DunDef_SeqAct_UnlockCostumes
	"Function UDKGame.DunDef_SeqAct_UnlockMission.Activated  ",                                     // DunDef_SeqAct_UnlockMission
	"Function UDKGame.DunDef_SeqCond_GetMultiplayerMode.Activated  ",                               // DunDef_SeqCond_GetMultiplayerMode
	"Function UDKGame.DunDef_SeqCond_IsAchievementUnlocked.Activated  ",                            // DunDef_SeqCond_IsAchievementUnlocked
	"Function UDKGame.DunDef_SeqCond_IsInVolume.Activated  ",                                       // DunDef_SeqCond_IsInVolume
	"Function UDKGame.DunDefEmitterSpawnable.AllowSpawn  ",                                         // Emitter_CrystalCoreActivated
	"Function Engine.UIScene.CalculateInputMask  ",                                                 // GameSetup_UI
	"Function Engine.UIScene.GetFocusHint  ",                                                       // GameSetup_UI
	"Function UDKGame.DunDefNativeUIScene.IsKeyboardOwned  ",                                       // GameSetup_UI
	"Function UDKGame.DunDefUIScene.OnInterceptedInputKey  ",                                       // GameSetup_UI
	"Function UDKGame.DunDefUIScene.RenderGamepadKey  ",                                            // GameSetup_UI
	"Function UDKGame.UI_GameSetup.OnReceivedInputKey  ",                                           // GameSetup_UI
	"Function UDKGame.UI_GameSetup.UIPostRender  ",                                                 // GameSetup_UI
	"Function UDKGame.HUDWidgetScene.UIPostRender  ",                                               // HUDWidgetScene
	"Function UDKGame.UIScript_ActionWheelHotkey.RenderGame  ",                                     // HotKey0Copy1
	"Function Engine.UIScreenObject.ActivateFocusHint  ",                                           // LeaveGameButton
	"Function Engine.GameInfo.Timer  ",                                                             // Main
	"Function UDKGame.Main.Tick  ",                                                                 // Main
	"Function Engine.UIScreenObject.SetVisibility  ",                                               // MainStatusPanel
	"Function Engine.UIScreenObject.AddedChild  ",                                                  // PauseBGPanel
	"Function Engine.UIScreenObject.RemovedChild  ",                                                // PauseBGPanel
	"Function Engine.UIScene.AddedChild  ",                                                         // PauseMenuUI
	"Function Engine.UIScene.RemovedChild  ",                                                       // PauseMenuUI
	"Function Engine.UIScene.UIAnimationEnded  ",                                                   // PauseMenuUI
	"Function Engine.UIScene.UIAnimationStarted  ",                                                 // PauseMenuUI
	"Function UDKGame.UI_PauseMenu.OnReceivedInputKey  ",                                           // PauseMenuUI
	"Function UDKGame.UI_PauseMenu.PostInitialSceneUpdate  ",                                       // PauseMenuUI
	"Function UDKGame.UI_PauseMenu.SceneActivated  ",                                               // PauseMenuUI
	"Function UDKGame.UI_PauseMenu.SceneDeactivated  ",                                             // PauseMenuUI
	"Function UDKGame.PlayerShopManager.Tick  ",                                                    // PlayerShopManager
	"Function Engine.UIList.Initialized  ",                                                         // SceneContextMenu
	"Function Engine.UIList.OnStateChanged  ",                                                      // SceneContextMenu
	"Function Engine.UIList.PostInitialize  ",                                                      // SceneContextMenu
	"Function Engine.SceneDataStore.Registered  ",                                                  // SceneDataStore
	"Function Engine.SequenceOp.Activated  ",                                                       // SeqAct_Delay
	"Function Engine.UIDataStore.SubscriberAttached  ",                                             // UIDataStore_Color
	"Function Engine.UIDataStore.SubscriberDetached  ",                                             // UIDataStore_Color
	"Function Engine.UIScreenObject.RemovedFromParent  ",                                           // UIPrefabInstance
	"Function UDKGame.UIScriptWidget_HeroPlayerListButton.RenderGame  ",                            // UIScriptWidget_HeroPlayerListButton
	"Function Engine.UIState.ActivateState  ",                                                      // UIState_Active
	"Function Engine.UIState.DeactivateState  ",                                                    // UIState_Active
	"Function Engine.UIState.IsStateAllowed  ",                                                     // UIState_Active
	"Function Engine.UIState.OnActivate  ",                                                         // UIState_Active
	"Function Engine.UIState.OnDeactivate  ",                                                       // UIState_Active
	"Function Engine.UIState_Disabled.ActivateState  ",                                             // UIState_Disabled
	"Function Engine.UIState_Focused.ActivateState  ",                                              // UIState_Focused
	"Function Engine.UIScrollbar.Initialized  ",                                                    // VertScrollbarTemplate
	"Function Engine.UIScrollbar.PostInitialize  ",                                                 // VertScrollbarTemplate
	"Function Engine.Actor.ModifyHearSoundComponent  ",                                             // WorldInfo
};
int filterint = 113;
