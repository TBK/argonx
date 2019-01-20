#include <precompiled.hh>

#include "helpers.hh"
#include "steamplatform.hh"

using namespace Steam;

namespace Reference {
#include "SteamStructs/IClientEngine.h"
}

class IClientEngineMap : Reference::IClientEngine {
public:
    // Inherited via IClientEngine
    virtual unknown_ret CreateSteamPipe() override {
        return unknown_ret();
    }
    virtual unknown_ret BReleaseSteamPipe(int) override {
        return unknown_ret();
    }
    virtual unknown_ret CreateGlobalUser(int *) override {
        return unknown_ret();
    }
    virtual unknown_ret ConnectToGlobalUser(int) override {
        return unknown_ret();
    }
    virtual unknown_ret CreateLocalUser(int *, EAccountType) override {
        return unknown_ret();
    }
    virtual unknown_ret CreatePipeToLocalUser(int, int *) override {
        return unknown_ret();
    }
    virtual unknown_ret ReleaseUser(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret IsValidHSteamUserPipe(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientUser(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientGameServer(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetLocalIPBinding(unsigned int, unsigned short) override {
        return unknown_ret();
    }
    virtual unknown_ret GetUniverseName(EUniverse) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientFriends(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientUtils(int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientBilling(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientMatchmaking(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientApps(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientMatchmakingServers(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientGameSearch(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret RunFrame() override {
        return unknown_ret();
    }
    virtual unknown_ret GetIPCCallCount() override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientUserStats(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientGameServerStats(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientNetworking(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientRemoteStorage(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientScreenshots(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetWarningMessageHook(void (*)(int, char const *)) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientGameCoordinator(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetOverlayNotificationPosition(ENotificationPosition) override {
        return unknown_ret();
    }
    virtual unknown_ret SetOverlayNotificationInset(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret HookScreenshots(bool) override {
        return unknown_ret();
    }
    virtual unknown_ret IsScreenshotsHooked() override {
        return unknown_ret();
    }
    virtual unknown_ret IsOverlayEnabled() override {
        return unknown_ret();
    }
    virtual unknown_ret GetAPICallResult(int, unsigned long long, void *, int, int, bool *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientProductBuilder(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientDepotBuilder(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientNetworkDeviceManager(int) override {
        return unknown_ret();
    }
    virtual unknown_ret ConCommandInit(IConCommandBaseAccessor *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientAppManager(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientConfigStore(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret BOverlayNeedsPresent() override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientGameStats(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientHTTP(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret BShutdownIfAllPipesClosed() override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientAudio(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientMusic(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientUnifiedMessages(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientController(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientParentalSettings(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientStreamLauncher(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientDeviceAuth(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientRemoteClientManager(int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientStreamClient(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientShortcuts(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientUGC(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientInventory(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientVR(int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientGameNotifications(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientHTMLSurface(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientVideo(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientControllerSerialized(int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientAppDisableUpdate(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret Set_Client_API_CCheckCallbackRegisteredInProcess(unsigned int (*)(int)) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientBluetoothManager(int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientSharedConnection(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientShader(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientNetworkingSocketsSerialized(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientCompat(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetClientCommandLine(int, char **) override {
        return unknown_ret();
    }
    virtual unknown_ret GetIClientParties(int, int) override {
        return unknown_ret();
    }
    virtual unknown_ret __Destructor1() override {
        return unknown_ret();
    }
#ifdef ARGONX_UNIX
    virtual unknown_ret __Destructor2() override {
        return unknown_ret();
    }
#endif
    virtual unknown_ret GetIPCServerMap() override {
        return unknown_ret();
    }
    virtual unknown_ret OnDebugTextArrived(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret OnThreadLocalRegistration() override {
        return unknown_ret();
    }
    virtual unknown_ret OnThreadBuffersOverLimit() override {
        return unknown_ret();
    }
};

class ISteamClientMap {
public:
    virtual unknown_ret CreateSteamPipe() {
        return unknown_ret();
    }
    virtual unknown_ret BReleaseSteamPipe(int) {
        return unknown_ret();
    }
    virtual unknown_ret CreateGlobalUser(int *) {
        return unknown_ret();
    }
    virtual unknown_ret ConnectToGlobalUser(int) {
        return unknown_ret();
    }
    virtual unknown_ret CreateLocalUser(int *, EAccountType) {
        return unknown_ret();
    }
    virtual unknown_ret CreatePipeToLocalUser(int, int *) {
        return unknown_ret();
    }
    virtual unknown_ret ReleaseUser(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret IsValidHSteamUserPipe(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamUser(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamGameServer(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret SetLocalIPBinding(unsigned int, unsigned short) {
        return unknown_ret();
    }
    virtual unknown_ret GetUniverseName(EUniverse) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamFriends(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamUtils(int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamBilling(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamMatchmaking(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamApps(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamMatchmakingServers(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamGameSearch(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret RunFrame() {
        return unknown_ret();
    }
    virtual unknown_ret GetIPCCallCount() {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamUserStats(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamGameServerStats(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamNetworking(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamRemoteStorage(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamScreenshots(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret SetWarningMessageHook(void (*)(int, char const *)) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamGameCoordinator(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret SetOverlayNotificationPosition(ENotificationPosition) {
        return unknown_ret();
    }
    virtual unknown_ret SetOverlayNotificationInset(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret HookScreenshots(bool) {
        return unknown_ret();
    }
    virtual unknown_ret IsScreenshotsHooked() {
        return unknown_ret();
    }
    virtual unknown_ret IsOverlayEnabled() {
        return unknown_ret();
    }
    virtual unknown_ret GetAPICallResult(int, unsigned long long, void *, int, int, bool *) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamProductBuilder(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamDepotBuilder(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamNetworkDeviceManager(int) {
        return unknown_ret();
    }
    virtual unknown_ret ConCommandInit(IConCommandBaseAccessor *) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamAppManager(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamConfigStore(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret BOverlayNeedsPresent() {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamGameStats(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamHTTP(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret BShutdownIfAllPipesClosed() {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamAudio(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamMusic(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamUnifiedMessages(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamController(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamParentalSettings(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamStreamLauncher(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamDeviceAuth(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamRemoteClientManager(int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamStreamClient(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamShortcuts(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamUGC(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamInventory(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamVR(int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamGameNotifications(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamHTMLSurface(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamVideo(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamControllerSerialized(int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamAppDisableUpdate(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret Set_Client_API_CCheckCallbackRegisteredInProcess(unsigned int (*)(int)) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamBluetoothManager(int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamSharedConnection(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamShader(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamNetworkingSocketsSerialized(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamCompat(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret SetClientCommandLine(int, char **) {
        return unknown_ret();
    }
    virtual unknown_ret GetISteamParties(int, int) {
        return unknown_ret();
    }
    virtual unknown_ret __Destructor1() {
        return unknown_ret();
    }
    virtual unknown_ret GetIPCServerMap() {
        return unknown_ret();
    }
    virtual unknown_ret OnDebugTextArrived(char const *) {
        return unknown_ret();
    }
    virtual unknown_ret OnThreadLocalRegistration() {
        return unknown_ret();
    }
    virtual unknown_ret OnThreadBuffersOverLimit() {
        return unknown_ret();
    }

    // Others
    virtual unknown_ret GetIVAC(int, int) {
        return unknown_ret();
    }

    virtual unknown_ret GetISteamContentServer(int, int) {
        return unknown_ret();
    }

    virtual unknown_ret GetISteamMasterServerUpdater(int, int) {
        return unknown_ret();
    }

    virtual unknown_ret GetISteamGenericInterface(int, int) {
        return unknown_ret();
    }

    virtual unknown_ret GetISteamAppList(int, int) {
        return unknown_ret();
    }

    virtual unknown_ret GetISteamMusicRemote(int, int) {
        return unknown_ret();
    }

    virtual unknown_ret GetISteamInput(int, int) {
        return unknown_ret();
    }

    virtual unknown_ret Set_SteamAPI_CCheckCallbackRegisteredInProcess(int) {
        return unknown_ret();
    }
};

AdaptDeclare(ISteamClient006);
AdaptDefine(ISteamClient006) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::CreateGlobalUser),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptEmpty(ISteamClientMap::GetIVAC),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetUniverseName),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamBilling),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamContentServer),
    AdaptPassThrough(ISteamClientMap::GetISteamMasterServerUpdater),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
};
AdaptDeclare(ISteamClient007);
AdaptDefine(ISteamClient007) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamContentServer),
    AdaptPassThrough(ISteamClientMap::GetISteamMasterServerUpdater),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
};
AdaptDeclare(ISteamClient008);
AdaptDefine(ISteamClient008) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMasterServerUpdater),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
};
AdaptDeclare(ISteamClient009);
AdaptDefine(ISteamClient009) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMasterServerUpdater),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
};
AdaptDeclare(ISteamClient010);
AdaptDefine(ISteamClient010) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMasterServerUpdater),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
};
AdaptDeclare(ISteamClient011);
AdaptDefine(ISteamClient011) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMasterServerUpdater),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
};
AdaptDeclare(ISteamClient012);
AdaptDefine(ISteamClient012) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
    AdaptPassThrough(ISteamClientMap::GetISteamUnifiedMessages),
    AdaptPassThrough(ISteamClientMap::GetISteamController),
    AdaptPassThrough(ISteamClientMap::GetISteamUGC),
};
AdaptDeclare(ISteamClient013);
AdaptDefine(ISteamClient013) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
    AdaptPassThrough(ISteamClientMap::GetISteamUnifiedMessages),
    AdaptPassThrough(ISteamClientMap::GetISteamController),
    AdaptPassThrough(ISteamClientMap::GetISteamUGC),
    AdaptPassThrough(ISteamClientMap::GetISteamInventory),
    AdaptPassThrough(ISteamClientMap::GetISteamVideo),
    AdaptPassThrough(ISteamClientMap::GetISteamAppList),
};
AdaptDeclare(ISteamClient014);
AdaptDefine(ISteamClient014) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
    AdaptPassThrough(ISteamClientMap::GetISteamUnifiedMessages),
    AdaptPassThrough(ISteamClientMap::GetISteamController),
    AdaptPassThrough(ISteamClientMap::GetISteamUGC),
    AdaptPassThrough(ISteamClientMap::GetISteamAppList),
    AdaptPassThrough(ISteamClientMap::GetISteamMusic),
};
AdaptDeclare(ISteamClient015);
AdaptDefine(ISteamClient015) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
    AdaptPassThrough(ISteamClientMap::GetISteamUnifiedMessages),
    AdaptPassThrough(ISteamClientMap::GetISteamController),
    AdaptPassThrough(ISteamClientMap::GetISteamUGC),
    AdaptPassThrough(ISteamClientMap::GetISteamAppList),
    AdaptPassThrough(ISteamClientMap::GetISteamMusic),
    AdaptPassThrough(ISteamClientMap::GetISteamMusicRemote),
};
AdaptDeclare(ISteamClient016);
AdaptDefine(ISteamClient016) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
    AdaptPassThrough(ISteamClientMap::GetISteamUnifiedMessages),
    AdaptPassThrough(ISteamClientMap::GetISteamController),
    AdaptPassThrough(ISteamClientMap::GetISteamUGC),
    AdaptPassThrough(ISteamClientMap::GetISteamAppList),
    AdaptPassThrough(ISteamClientMap::GetISteamMusic),
    AdaptPassThrough(ISteamClientMap::GetISteamMusicRemote),
    AdaptPassThrough(ISteamClientMap::GetISteamHTMLSurface),
    AdaptEmpty(ISteamClientMap::DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess),
    AdaptEmpty(ISteamClientMap::DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess),
    AdaptPassThrough(ISteamClientMap::Set_SteamAPI_CCheckCallbackRegisteredInProcess),
};
AdaptDeclare(ISteamClient017);
AdaptDefine(ISteamClient017) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
    AdaptEmpty(ISteamClientMap::DEPRECATED_GetISteamUnifiedMessages),
    AdaptPassThrough(ISteamClientMap::GetISteamController),
    AdaptPassThrough(ISteamClientMap::GetISteamUGC),
    AdaptPassThrough(ISteamClientMap::GetISteamAppList),
    AdaptPassThrough(ISteamClientMap::GetISteamMusic),
    AdaptPassThrough(ISteamClientMap::GetISteamMusicRemote),
    AdaptPassThrough(ISteamClientMap::GetISteamHTMLSurface),
    AdaptEmpty(ISteamClientMap::DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess),
    AdaptEmpty(ISteamClientMap::DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess),
    AdaptPassThrough(ISteamClientMap::Set_SteamAPI_CCheckCallbackRegisteredInProcess),
    AdaptPassThrough(ISteamClientMap::GetISteamInventory),
    AdaptPassThrough(ISteamClientMap::GetISteamVideo),
    AdaptPassThrough(ISteamClientMap::GetISteamParentalSettings),
};
AdaptDeclare(ISteamClient018);
AdaptDefine(ISteamClient018) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::GetISteamGameSearch),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
    AdaptEmpty(ISteamClientMap::DEPRECATED_GetISteamUnifiedMessages),
    AdaptPassThrough(ISteamClientMap::GetISteamController),
    AdaptPassThrough(ISteamClientMap::GetISteamUGC),
    AdaptPassThrough(ISteamClientMap::GetISteamAppList),
    AdaptPassThrough(ISteamClientMap::GetISteamMusic),
    AdaptPassThrough(ISteamClientMap::GetISteamMusicRemote),
    AdaptPassThrough(ISteamClientMap::GetISteamHTMLSurface),
    AdaptEmpty(ISteamClientMap::DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess),
    AdaptEmpty(ISteamClientMap::DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess),
    AdaptPassThrough(ISteamClientMap::Set_SteamAPI_CCheckCallbackRegisteredInProcess),
    AdaptPassThrough(ISteamClientMap::GetISteamInventory),
    AdaptPassThrough(ISteamClientMap::GetISteamVideo),
    AdaptPassThrough(ISteamClientMap::GetISteamParentalSettings),
    AdaptPassThrough(ISteamClientMap::GetISteamInput),
    AdaptPassThrough(ISteamClientMap::GetISteamParties),
};
AdaptDeclare(ISteamClient019);
AdaptDefine(ISteamClient019) = {
    AdaptPassThrough(ISteamClientMap::CreateSteamPipe),
    AdaptPassThrough(ISteamClientMap::BReleaseSteamPipe),
    AdaptPassThrough(ISteamClientMap::ConnectToGlobalUser),
    AdaptPassThrough(ISteamClientMap::CreateLocalUser),
    AdaptPassThrough(ISteamClientMap::ReleaseUser),
    AdaptPassThrough(ISteamClientMap::GetISteamUser),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServer),
    AdaptPassThrough(ISteamClientMap::SetLocalIPBinding),
    AdaptPassThrough(ISteamClientMap::GetISteamFriends),
    AdaptPassThrough(ISteamClientMap::GetISteamUtils),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmaking),
    AdaptPassThrough(ISteamClientMap::GetISteamMatchmakingServers),
    AdaptPassThrough(ISteamClientMap::GetISteamGenericInterface),
    AdaptPassThrough(ISteamClientMap::GetISteamUserStats),
    AdaptPassThrough(ISteamClientMap::GetISteamGameServerStats),
    AdaptPassThrough(ISteamClientMap::GetISteamApps),
    AdaptPassThrough(ISteamClientMap::GetISteamNetworking),
    AdaptPassThrough(ISteamClientMap::GetISteamRemoteStorage),
    AdaptPassThrough(ISteamClientMap::GetISteamScreenshots),
    AdaptPassThrough(ISteamClientMap::GetISteamGameSearch),
    AdaptPassThrough(ISteamClientMap::RunFrame),
    AdaptPassThrough(ISteamClientMap::GetIPCCallCount),
    AdaptPassThrough(ISteamClientMap::SetWarningMessageHook),
    AdaptPassThrough(ISteamClientMap::BShutdownIfAllPipesClosed),
    AdaptPassThrough(ISteamClientMap::GetISteamHTTP),
    AdaptEmpty(ISteamClientMap::DEPRECATED_GetISteamUnifiedMessages),
    AdaptPassThrough(ISteamClientMap::GetISteamController),
    AdaptPassThrough(ISteamClientMap::GetISteamUGC),
    AdaptPassThrough(ISteamClientMap::GetISteamAppList),
    AdaptPassThrough(ISteamClientMap::GetISteamMusic),
    AdaptPassThrough(ISteamClientMap::GetISteamMusicRemote),
    AdaptPassThrough(ISteamClientMap::GetISteamHTMLSurface),
    AdaptEmpty(ISteamClientMap::DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess),
    AdaptEmpty(ISteamClientMap::DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess),
    AdaptPassThrough(ISteamClientMap::Set_SteamAPI_CCheckCallbackRegisteredInProcess),
    AdaptPassThrough(ISteamClientMap::GetISteamInventory),
    AdaptPassThrough(ISteamClientMap::GetISteamVideo),
    AdaptPassThrough(ISteamClientMap::GetISteamParentalSettings),
    AdaptPassThrough(ISteamClientMap::GetISteamInput),
    AdaptPassThrough(ISteamClientMap::GetISteamParties),
};