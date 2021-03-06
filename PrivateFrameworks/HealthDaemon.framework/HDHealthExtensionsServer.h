/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthExtensionsServer : NSObject <HDDiagnosticObject, HKExtendedServerInterface> {
    HDClient * _client;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _registeredForAchievementDefinitionUnviewedCountChangeNotifications;
    BOOL  _registeredForAchievementNotifications;
}

@property (nonatomic, retain) HDClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL registeredForAchievementDefinitionUnviewedCountChangeNotifications;
@property (nonatomic) BOOL registeredForAchievementNotifications;
@property (readonly) Class superclass;

+ (BOOL)_shouldAcceptConnectionForClient:(id)arg1 error:(id*)arg2;
+ (id)serverWithClient:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_achievementDefinitionUnviewedCountChanged:(id)arg1;
- (void)_achievementsAdded:(id)arg1;
- (void)_checkForUpdatedAchievementAssetsOnce;
- (id)client;
- (id)clientInterface;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithClient:(id)arg1 profile:(id)arg2;
- (void)invalidate;
- (id)profile;
- (id)queue;
- (BOOL)registeredForAchievementDefinitionUnviewedCountChangeNotifications;
- (BOOL)registeredForAchievementNotifications;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)remote_addAchievement:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_deleteAchievementWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_deleteAllAchievementsWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAchievementAssetsServerURLWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_fetchHiddenUnearnedAchievementDefinitionIdentifiersAmongIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchNumberOfUnviewedAchievementsWithCompletion:(id /* block */)arg1;
- (void)remote_fetchUnviewedAchievementDefinitionIdentifiersWithCompletion:(id /* block */)arg1;
- (void)remote_markAchievementAsViewed:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_markAchievementDefinitionIdentifierAlertViewed:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_markAchievementsAlerted:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_registerForAchievementDefinitionNotificationsWithCompletion:(id /* block */)arg1;
- (void)remote_registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(id /* block */)arg1;
- (void)remote_runAchievementsFixupAsDryRun:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)remote_setAchievementAssetsServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_updateAllAchievementAssetsWithCompletion:(id /* block */)arg1;
- (id)serverInterface;
- (void)setClient:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setRegisteredForAchievementDefinitionUnviewedCountChangeNotifications:(BOOL)arg1;
- (void)setRegisteredForAchievementNotifications:(BOOL)arg1;

@end
