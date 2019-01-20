#include <precompiled.hh>

#include "helpers.hh"
#include "steamplatform.hh"

using namespace Steam;

namespace Reference {
#include "SteamStructs/IClientUser.h"
}

class IClientUserMap : public Reference::IClientUser {
public:
    // Inherited via IClientUser
    virtual unknown_ret GetHSteamUser() override {
        return unknown_ret();
    }
    virtual unknown_ret LogOn(CSteamID) override {
        return unknown_ret();
    }
    virtual unknown_ret LogOnWithPassword(char const *, char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret LogOnAndCreateNewSteamAccountIfNeeded() override {
        return unknown_ret();
    }
    virtual unknown_ret VerifyOfflineLogon() override {
        return unknown_ret();
    }
    virtual unknown_ret LogOff() override {
        return unknown_ret();
    }
    virtual unknown_ret BLoggedOn() override {
        return unknown_ret();
    }
    virtual unknown_ret GetLogonState() override {
        return unknown_ret();
    }
    virtual unknown_ret BConnected() override {
        return unknown_ret();
    }
    virtual unknown_ret BTryingToLogin() override {
        return unknown_ret();
    }
    virtual unknown_ret GetSteamID() override {
        return unknown_ret();
    }
    virtual unknown_ret GetConsoleSteamID() override {
        return unknown_ret();
    }
    virtual unknown_ret GetClientInstanceID() override {
        return unknown_ret();
    }
    virtual unknown_ret IsVACBanned(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetEmail(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret SetConfigString(EConfigSubTree, char const *, char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetConfigString(EConfigSubTree, char const *, char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetConfigInt(EConfigSubTree, char const *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetConfigInt(EConfigSubTree, char const *, int *) override {
        return unknown_ret();
    }
    virtual unknown_ret DeleteConfigKey(EConfigSubTree, char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetConfigStoreKeyName(EConfigSubTree, char const *, char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret InitiateGameConnection(void *, int, CSteamID, CGameID, unsigned int, unsigned short, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret InitiateGameConnectionOld(void *, int, CSteamID, CGameID, unsigned int, unsigned short, bool, void *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret TerminateGameConnection(unsigned int, unsigned short) override {
        return unknown_ret();
    }
    virtual unknown_ret TerminateAppMultiStep(unsigned int, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetSelfAsChatDestination(bool) override {
        return unknown_ret();
    }
    virtual unknown_ret IsPrimaryChatDestination() override {
        return unknown_ret();
    }
    virtual unknown_ret RequestLegacyCDKey(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret AckGuestPass(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret RedeemGuestPass(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetGuestPassToGiveCount() override {
        return unknown_ret();
    }
    virtual unknown_ret GetGuestPassToRedeemCount() override {
        return unknown_ret();
    }
    virtual unknown_ret GetGuestPassToGiveInfo(unsigned int, unsigned long long *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetGuestPassToGiveOut(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetGuestPassToRedeem(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetGuestPassToRedeemInfo(unsigned int, unsigned long long *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetGuestPassToRedeemSenderName(unsigned int, char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetNumAppsInGuestPassesToRedeem() override {
        return unknown_ret();
    }
    virtual unknown_ret GetAppsInGuestPassesToRedeem(unsigned int *, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetCountUserNotifications() override {
        return unknown_ret();
    }
    virtual unknown_ret GetCountUserNotification(EUserNotification) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestStoreAuthURL(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret SetLanguage(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret TrackAppUsageEvent(CGameID, int, char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret RaiseConnectionPriority(EConnectionPriority, EConnectionPriorityReason) override {
        return unknown_ret();
    }
    virtual unknown_ret ResetConnectionPriority(int) override {
        return unknown_ret();
    }
    virtual unknown_ret BHasCachedCredentials(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret SetAccountNameForCachedCredentialLogin(char const *, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret DestroyCachedCredentials(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetCurrentWebAuthToken(char *, int, char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestWebAuthToken() override {
        return unknown_ret();
    }
    virtual unknown_ret SetLoginInformation(char const *, char const *, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret SetTwoFactorCode(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret ClearAllLoginInformation() override {
        return unknown_ret();
    }
    virtual unknown_ret GetLanguage(char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsCyberCafe() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAcademicAccount() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsPortal2EducationAccount() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAlienwareDemoAccount() override {
        return unknown_ret();
    }
    virtual unknown_ret TrackNatTraversalStat(CNatTraversalStat const *) override {
        return unknown_ret();
    }
    virtual unknown_ret TrackSteamUsageEvent(ESteamUsageEvent, unsigned char const *, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret TrackSteamGUIUsage(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret SetComputerInUse() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsGameRunning(CGameID) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsGameWindowReady(CGameID) override {
        return unknown_ret();
    }
    virtual unknown_ret BUpdateAppOwnershipTicket(unsigned int, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestCustomBinary(char const *, unsigned int, bool, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret GetCustomBinariesState(unsigned int, long long *, long long *) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestCustomBinaries(unsigned int, bool, bool, unsigned int *) override {
        return unknown_ret();
    }
    virtual unknown_ret SetCellID(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetUserBaseFolder() override {
        return unknown_ret();
    }
    virtual unknown_ret GetUserDataFolder(CGameID, char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetUserConfigFolder(char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAccountName(char *, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAccountName(CSteamID, char *, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret IsPasswordRemembered() override {
        return unknown_ret();
    }
    virtual unknown_ret CheckoutSiteLicenseSeat(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAvailableSeats(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAssociatedSiteName() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsRunningInCafe() override {
        return unknown_ret();
    }
    virtual unknown_ret RequiresLegacyCDKey(unsigned int, bool *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetLegacyCDKey(unsigned int, char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetLegacyCDKey(unsigned int, char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret WriteLegacyCDKey(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret RemoveLegacyCDKey(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestLegacyCDKeyFromApp(unsigned int, unsigned int, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAnyGameRunning() override {
        return unknown_ret();
    }
    virtual unknown_ret GetSteamGuardDetails() override {
        return unknown_ret();
    }
    virtual unknown_ret GetTwoFactorDetails() override {
        return unknown_ret();
    }
    virtual unknown_ret BHasTwoFactor() override {
        return unknown_ret();
    }
    virtual unknown_ret GetEmail(char *, int, bool *) override {
        return unknown_ret();
    }
    virtual unknown_ret FindAccountsByCdKey(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret Test_FakeConnectionTimeout() override {
        return unknown_ret();
    }
    virtual unknown_ret RunInstallScript(unsigned int, char const *, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret IsInstallScriptRunning() override {
        return unknown_ret();
    }
    virtual unknown_ret GetInstallScriptState(char *, unsigned int, unsigned int *, unsigned int *) override {
        return unknown_ret();
    }
    virtual unknown_ret SpawnProcess(char const *, char const *, unsigned int, char const *, CGameID, char const *, unsigned int, unsigned int, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAppOwnershipTicketLength(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAppOwnershipTicketData(unsigned int, void *, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAppOwnershipTicketExtendedData(unsigned int, void *, unsigned int, unsigned int *, unsigned int *, unsigned int *, unsigned int *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetMarketingMessageCount() override {
        return unknown_ret();
    }
    virtual unknown_ret GetMarketingMessage(int, unsigned long long *, char *, int, EMarketingMessageFlags *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAuthSessionTicket(void *, int, unsigned int *) override {
        return unknown_ret();
    }
    virtual unknown_ret BeginAuthSession(void const *, int, CSteamID) override {
        return unknown_ret();
    }
    virtual unknown_ret EndAuthSession(CSteamID) override {
        return unknown_ret();
    }
    virtual unknown_ret CancelAuthTicket(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret IsUserSubscribedAppInTicket(CSteamID, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret AdvertiseGame(CGameID, CSteamID, unsigned int, unsigned short) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestEncryptedAppTicket(void *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetEncryptedAppTicket(void *, int, unsigned int *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetGameBadgeLevel(int, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret GetPlayerSteamLevel() override {
        return unknown_ret();
    }
    virtual unknown_ret SetAccountLimited(bool) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAccountLimited() override {
        return unknown_ret();
    }
    virtual unknown_ret SetAccountCommunityBanned(bool) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAccountCommunityBanned() override {
        return unknown_ret();
    }
    virtual unknown_ret SetLimitedAccountCanInviteFriends(bool) override {
        return unknown_ret();
    }
    virtual unknown_ret BLimitedAccountCanInviteFriends() override {
        return unknown_ret();
    }
    virtual unknown_ret SendValidationEmail() override {
        return unknown_ret();
    }
    virtual unknown_ret BGameConnectTokensAvailable() override {
        return unknown_ret();
    }
    virtual unknown_ret NumGamesRunning() override {
        return unknown_ret();
    }
    virtual unknown_ret GetRunningGameID(int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetRunningGamePID(int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAccountSecurityPolicyFlags() override {
        return unknown_ret();
    }
    virtual unknown_ret SetClientStat(EClientStat, long long, unsigned int, unsigned int, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret VerifyPassword(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret BSupportUser() override {
        return unknown_ret();
    }
    virtual unknown_ret BNeedsSSANextSteamLogon() override {
        return unknown_ret();
    }
    virtual unknown_ret ClearNeedsSSANextSteamLogon() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAppOverlayEnabled(CGameID) override {
        return unknown_ret();
    }
    virtual unknown_ret BOverlayIgnoreChildProcesses(CGameID) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsBehindNAT() override {
        return unknown_ret();
    }
    virtual unknown_ret GetMicroTxnAppID(unsigned long long) override {
        return unknown_ret();
    }
    virtual unknown_ret GetMicroTxnOrderID(unsigned long long) override {
        return unknown_ret();
    }
    virtual unknown_ret BGetMicroTxnPrice(unsigned long long, CAmount *, CAmount *, bool *, CAmount *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetMicroTxnLineItemCount(unsigned long long) override {
        return unknown_ret();
    }
    virtual unknown_ret BGetMicroTxnLineItem(unsigned long long, unsigned int, CAmount *, unsigned int *, char *, unsigned int, int *, unsigned char *, CAmount *, bool *) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsSandboxMicroTxn(unsigned long long, bool *) override {
        return unknown_ret();
    }
    virtual unknown_ret BMicroTxnRequiresCachedPmtMethod(unsigned long long, bool *) override {
        return unknown_ret();
    }
    virtual unknown_ret AuthorizeMicroTxn(unsigned long long, EMicroTxnAuthResponse) override {
        return unknown_ret();
    }
    virtual unknown_ret BGetWalletBalance(bool *, CAmount *, CAmount *) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestMicroTxnInfo(unsigned long long) override {
        return unknown_ret();
    }
    virtual unknown_ret BMicroTxnRefundable(unsigned long long) override {
        return unknown_ret();
    }
    virtual unknown_ret BGetAppMinutesPlayed(unsigned int, int *, int *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAppLastPlayedTime(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetAppUpdateDisabledSecondsRemaining(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret BGetGuideURL(unsigned int, char *, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret BPromptToVerifyEmail() override {
        return unknown_ret();
    }
    virtual unknown_ret BPromptToChangePassword() override {
        return unknown_ret();
    }
    virtual unknown_ret BAccountExtraSecurity() override {
        return unknown_ret();
    }
    virtual unknown_ret BAccountShouldShowLockUI() override {
        return unknown_ret();
    }
    virtual unknown_ret GetCountAuthedComputers() override {
        return unknown_ret();
    }
    virtual unknown_ret BSteamGuardNewMachineNotification() override {
        return unknown_ret();
    }
    virtual unknown_ret GetSteamGuardEnabledTime() override {
        return unknown_ret();
    }
    virtual unknown_ret GetSteamGuardHistoryEntry(int, unsigned int *, unsigned int *, bool *, char *, int, char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret SetSteamGuardNewMachineDialogResponse(bool, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret SetPhoneIsVerified(bool) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsPhoneVerified() override {
        return unknown_ret();
    }
    virtual unknown_ret SetPhoneIsIdentifying(bool) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsPhoneIdentifying() override {
        return unknown_ret();
    }
    virtual unknown_ret SetPhoneIsRequiringVerification(bool) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsPhoneRequiringVerification() override {
        return unknown_ret();
    }
    virtual unknown_ret ChangeTwoFactorAuthOptions(int) override {
        return unknown_ret();
    }
    virtual unknown_ret Set2ndFactorAuthCode(char const *, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret SetUserMachineName(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetUserMachineName(char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetEmailDomainFromLogonFailure(char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsSubscribedApp(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetSubscribedApps(unsigned int *, unsigned int, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret RegisterActivationCode(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret AckSystemIM(unsigned long long) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestSpecialSurvey(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret SendSpecialSurveyResponse(unsigned int, unsigned char const *, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestNotifications() override {
        return unknown_ret();
    }
    virtual unknown_ret GetAppOwnershipInfo(unsigned int, unsigned int *, unsigned int *, char *) override {
        return unknown_ret();
    }
    virtual unknown_ret SendGameWebCallback(unsigned int, char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsStreamingUIToRemoteDevice() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsCurrentlyNVStreaming() override {
        return unknown_ret();
    }
    virtual unknown_ret OnBigPictureForStreamingStartResult(bool, void *) override {
        return unknown_ret();
    }
    virtual unknown_ret OnBigPictureForStreamingDone() override {
        return unknown_ret();
    }
    virtual unknown_ret OnBigPictureForStreamingRestarting() override {
        return unknown_ret();
    }
    virtual unknown_ret StopStreaming(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret LockParentalLock() override {
        return unknown_ret();
    }
    virtual unknown_ret UnlockParentalLock(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsParentalLockEnabled() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsParentalLockLocked() override {
        return unknown_ret();
    }
    virtual unknown_ret BlockApp(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret UnblockApp(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAppBlocked(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAppInBlockList(unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret BlockFeature(EParentalFeature) override {
        return unknown_ret();
    }
    virtual unknown_ret UnblockFeature(EParentalFeature) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsFeatureBlocked(EParentalFeature) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsFeatureInBlockList(EParentalFeature) override {
        return unknown_ret();
    }
    virtual unknown_ret GetParentalUnlockTime() override {
        return unknown_ret();
    }
    virtual unknown_ret BGetRecoveryEmail(char *, int) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestParentalRecoveryEmail() override {
        return unknown_ret();
    }
    virtual unknown_ret BGetSerializedParentalSettings(CUtlBuffer *) override {
        return unknown_ret();
    }
    virtual unknown_ret BSetParentalSettings(CUtlBuffer *) override {
        return unknown_ret();
    }
    virtual unknown_ret BDisableParentalSettings() override {
        return unknown_ret();
    }
    virtual unknown_ret BGetParentalWebToken(CUtlBuffer *, CUtlBuffer *) override {
        return unknown_ret();
    }
    virtual unknown_ret GetCommunityPreference(ECommunityPreference) override {
        return unknown_ret();
    }
    virtual unknown_ret SetCommunityPreference(ECommunityPreference, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret BCanLogonOfflineMode() override {
        return unknown_ret();
    }
    virtual unknown_ret LogOnOfflineMode() override {
        return unknown_ret();
    }
    virtual unknown_ret ValidateOfflineLogonTicket(char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret BGetOfflineLogonTicket(char const *, COffline_OfflineLogonTicket *) override {
        return unknown_ret();
    }
    virtual unknown_ret UploadLocalClientLogs() override {
        return unknown_ret();
    }
    virtual unknown_ret SetAsyncNotificationEnabled(unsigned int, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret BIsOtherSessionPlaying(unsigned int *) override {
        return unknown_ret();
    }
    virtual unknown_ret BKickOtherPlayingSession() override {
        return unknown_ret();
    }
    virtual unknown_ret BIsAccountLockedDown() override {
        return unknown_ret();
    }
    virtual unknown_ret RemoveAppTag(CGameID, char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret AddAppTag(CGameID, char const *) override {
        return unknown_ret();
    }
    virtual unknown_ret SetAppHidden(CGameID, bool) override {
        return unknown_ret();
    }
    virtual unknown_ret RequestAccountLinkInfo() override {
        return unknown_ret();
    }
    virtual unknown_ret RequestSurveySchedule() override {
        return unknown_ret();
    }
    virtual unknown_ret RequestNewSteamAnnouncementState() override {
        return unknown_ret();
    }
    virtual unknown_ret UpdateSteamAnnouncementLastRead(unsigned long long, unsigned int) override {
        return unknown_ret();
    }
    virtual unknown_ret GetMarketEligibility() override {
        return unknown_ret();
    }
};

AdaptDeclare(ISteamUser004);
AdaptDefine(ISteamUser004) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::LogOn),
    AdaptPassThrough(IClientUserMap::LogOff),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetLogonState),
    AdaptPassThrough(IClientUserMap::BConnected),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::IsVACBanned),
    AdaptEmpty(IClientUserMap::RequireShowVACBannedMessage),
    AdaptEmpty(IClientUserMap::AcknowledgeVACBanning),
    AdaptEmpty(IClientUserMap::NClientGameIDAdd),
    AdaptEmpty(IClientUserMap::RemoveClientGame),
    AdaptEmpty(IClientUserMap::SetClientGameServer),
    AdaptEmpty(IClientUserMap::SetSteam2Ticket),
    AdaptEmpty(IClientUserMap::AddServerNetAddress),
    AdaptPassThrough(IClientUserMap::SetEmail),
    AdaptEmpty(IClientUserMap::GetSteamGameConnectToken),
    AdaptPassThrough(IClientUserMap::SetConfigString),
    AdaptPassThrough(IClientUserMap::GetConfigString),
    AdaptPassThrough(IClientUserMap::SetConfigInt),
    AdaptPassThrough(IClientUserMap::GetConfigInt),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::SetSelfAsChatDestination),
    AdaptPassThrough(IClientUserMap::IsPrimaryChatDestination),
    AdaptPassThrough(IClientUserMap::RequestLegacyCDKey),
};
AdaptDeclare(ISteamUser005);
AdaptDefine(ISteamUser005) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::LogOn),
    AdaptPassThrough(IClientUserMap::LogOff),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetLogonState),
    AdaptPassThrough(IClientUserMap::BConnected),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::IsVACBanned),
    AdaptEmpty(IClientUserMap::RequireShowVACBannedMessage),
    AdaptEmpty(IClientUserMap::AcknowledgeVACBanning),
    AdaptEmpty(IClientUserMap::SetSteam2Ticket),
    AdaptEmpty(IClientUserMap::AddServerNetAddress),
    AdaptPassThrough(IClientUserMap::SetEmail),
    AdaptPassThrough(IClientUserMap::SetConfigString),
    AdaptPassThrough(IClientUserMap::GetConfigString),
    AdaptPassThrough(IClientUserMap::SetConfigInt),
    AdaptPassThrough(IClientUserMap::GetConfigInt),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::SetSelfAsChatDestination),
    AdaptPassThrough(IClientUserMap::IsPrimaryChatDestination),
    AdaptPassThrough(IClientUserMap::RequestLegacyCDKey),
    AdaptEmpty(IClientUserMap::SendGuestPassByEmail),
    AdaptEmpty(IClientUserMap::SendGuestPassByAccountID),
    AdaptPassThrough(IClientUserMap::AckGuestPass),
    AdaptPassThrough(IClientUserMap::RedeemGuestPass),
    AdaptPassThrough(IClientUserMap::GetGuestPassToGiveCount),
    AdaptPassThrough(IClientUserMap::GetGuestPassToRedeemCount),
    AdaptEmpty(IClientUserMap::GetGuestPassLastUpdateTime),
    AdaptPassThrough(IClientUserMap::GetGuestPassToGiveInfo),
    AdaptPassThrough(IClientUserMap::GetGuestPassToRedeemInfo),
    AdaptEmpty(IClientUserMap::GetGuestPassToRedeemSenderAddress),
    AdaptPassThrough(IClientUserMap::GetGuestPassToRedeemSenderName),
    AdaptEmpty(IClientUserMap::AcknowledgeMessageByGID),
    AdaptPassThrough(IClientUserMap::SetLanguage),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptEmpty(IClientUserMap::SetAccountName),
    AdaptEmpty(IClientUserMap::SetPassword),
    AdaptEmpty(IClientUserMap::SetAccountCreationTime),
};
AdaptDeclare(ISteamUser006);
AdaptDefine(ISteamUser006) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::LogOn),
    AdaptPassThrough(IClientUserMap::LogOff),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::SetConfigString),
    AdaptPassThrough(IClientUserMap::GetConfigString),
    AdaptPassThrough(IClientUserMap::SetConfigInt),
    AdaptPassThrough(IClientUserMap::GetConfigInt),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
};
AdaptDeclare(ISteamUser007);
AdaptDefine(ISteamUser007) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::LogOn),
    AdaptPassThrough(IClientUserMap::LogOff),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::SetConfigString),
    AdaptPassThrough(IClientUserMap::GetConfigString),
    AdaptPassThrough(IClientUserMap::SetConfigInt),
    AdaptPassThrough(IClientUserMap::GetConfigInt),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptEmpty(IClientUserMap::RefreshSteam2Login),
};
AdaptDeclare(ISteamUser008);
AdaptDefine(ISteamUser008) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptEmpty(IClientUserMap::RefreshSteam2Login),
};
AdaptDeclare(ISteamUser009);
AdaptDefine(ISteamUser009) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptEmpty(IClientUserMap::RefreshSteam2Login),
};
AdaptDeclare(ISteamUser010);
AdaptDefine(ISteamUser010) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
};
AdaptDeclare(ISteamUser011);
AdaptDefine(ISteamUser011) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetCompressedVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
};
AdaptDeclare(ISteamUser012);
AdaptDefine(ISteamUser012) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetCompressedVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
};
AdaptDeclare(ISteamUser013);
AdaptDefine(ISteamUser013) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetAvailableVoice),
    AdaptEmpty(IClientUserMap::GetVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
    AdaptPassThrough(IClientUserMap::BIsBehindNAT),
};
AdaptDeclare(ISteamUser014);
AdaptDefine(ISteamUser014) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetAvailableVoice),
    AdaptEmpty(IClientUserMap::GetVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
    AdaptPassThrough(IClientUserMap::BIsBehindNAT),
    AdaptPassThrough(IClientUserMap::AdvertiseGame),
    AdaptPassThrough(IClientUserMap::RequestEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetEncryptedAppTicket),
};
AdaptDeclare(ISteamUser015);
AdaptDefine(ISteamUser015) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetAvailableVoice),
    AdaptEmpty(IClientUserMap::GetVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptEmpty(IClientUserMap::GetVoiceOptimalSampleRate),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
    AdaptPassThrough(IClientUserMap::BIsBehindNAT),
    AdaptPassThrough(IClientUserMap::AdvertiseGame),
    AdaptPassThrough(IClientUserMap::RequestEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetEncryptedAppTicket),
};
AdaptDeclare(ISteamUser016);
AdaptDefine(ISteamUser016) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetAvailableVoice),
    AdaptEmpty(IClientUserMap::GetVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptEmpty(IClientUserMap::GetVoiceOptimalSampleRate),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
    AdaptPassThrough(IClientUserMap::BIsBehindNAT),
    AdaptPassThrough(IClientUserMap::AdvertiseGame),
    AdaptPassThrough(IClientUserMap::RequestEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetEncryptedAppTicket),
};
AdaptDeclare(ISteamUser017);
AdaptDefine(ISteamUser017) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetAvailableVoice),
    AdaptEmpty(IClientUserMap::GetVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptEmpty(IClientUserMap::GetVoiceOptimalSampleRate),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
    AdaptPassThrough(IClientUserMap::BIsBehindNAT),
    AdaptPassThrough(IClientUserMap::AdvertiseGame),
    AdaptPassThrough(IClientUserMap::RequestEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetGameBadgeLevel),
    AdaptPassThrough(IClientUserMap::GetPlayerSteamLevel),
};
AdaptDeclare(ISteamUser018);
AdaptDefine(ISteamUser018) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetAvailableVoice),
    AdaptEmpty(IClientUserMap::GetVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptEmpty(IClientUserMap::GetVoiceOptimalSampleRate),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
    AdaptPassThrough(IClientUserMap::BIsBehindNAT),
    AdaptPassThrough(IClientUserMap::AdvertiseGame),
    AdaptPassThrough(IClientUserMap::RequestEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetGameBadgeLevel),
    AdaptPassThrough(IClientUserMap::GetPlayerSteamLevel),
    AdaptPassThrough(IClientUserMap::RequestStoreAuthURL),
};
AdaptDeclare(ISteamUser019);
AdaptDefine(ISteamUser019) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetAvailableVoice),
    AdaptEmpty(IClientUserMap::GetVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptEmpty(IClientUserMap::GetVoiceOptimalSampleRate),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
    AdaptPassThrough(IClientUserMap::BIsBehindNAT),
    AdaptPassThrough(IClientUserMap::AdvertiseGame),
    AdaptPassThrough(IClientUserMap::RequestEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetGameBadgeLevel),
    AdaptPassThrough(IClientUserMap::GetPlayerSteamLevel),
    AdaptPassThrough(IClientUserMap::RequestStoreAuthURL),
    AdaptPassThrough(IClientUserMap::BIsPhoneVerified),
    AdaptPassThrough(IClientUserMap::BHasTwoFactor),
    AdaptPassThrough(IClientUserMap::BIsPhoneIdentifying),
    AdaptPassThrough(IClientUserMap::BIsPhoneRequiringVerification),
};
AdaptDeclare(ISteamUser020);
AdaptDefine(ISteamUser020) = {
    AdaptPassThrough(IClientUserMap::GetHSteamUser),
    AdaptPassThrough(IClientUserMap::BLoggedOn),
    AdaptPassThrough(IClientUserMap::GetSteamID),
    AdaptPassThrough(IClientUserMap::InitiateGameConnection),
    AdaptPassThrough(IClientUserMap::TerminateGameConnection),
    AdaptPassThrough(IClientUserMap::TrackAppUsageEvent),
    AdaptPassThrough(IClientUserMap::GetUserDataFolder),
    AdaptEmpty(IClientUserMap::StartVoiceRecording),
    AdaptEmpty(IClientUserMap::StopVoiceRecording),
    AdaptEmpty(IClientUserMap::GetAvailableVoice),
    AdaptEmpty(IClientUserMap::GetVoice),
    AdaptEmpty(IClientUserMap::DecompressVoice),
    AdaptEmpty(IClientUserMap::GetVoiceOptimalSampleRate),
    AdaptPassThrough(IClientUserMap::GetAuthSessionTicket),
    AdaptPassThrough(IClientUserMap::BeginAuthSession),
    AdaptPassThrough(IClientUserMap::EndAuthSession),
    AdaptPassThrough(IClientUserMap::CancelAuthTicket),
    AdaptPassThrough(IClientUserMap::IsUserSubscribedAppInTicket),
    AdaptPassThrough(IClientUserMap::BIsBehindNAT),
    AdaptPassThrough(IClientUserMap::AdvertiseGame),
    AdaptPassThrough(IClientUserMap::RequestEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetEncryptedAppTicket),
    AdaptPassThrough(IClientUserMap::GetGameBadgeLevel),
    AdaptPassThrough(IClientUserMap::GetPlayerSteamLevel),
    AdaptPassThrough(IClientUserMap::RequestStoreAuthURL),
    AdaptPassThrough(IClientUserMap::BIsPhoneVerified),
    AdaptPassThrough(IClientUserMap::BHasTwoFactor),
    AdaptPassThrough(IClientUserMap::BIsPhoneIdentifying),
    AdaptPassThrough(IClientUserMap::BIsPhoneRequiringVerification),
    AdaptPassThrough(IClientUserMap::GetMarketEligibility),
};