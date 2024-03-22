//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface DYSyncToutiaoAlertManager : NSObject <DYSyncToutiaoAlertManagerProtocol> {
    BOOL _needShowAlert;
    NSMutableDictionary *_requestRecord;
}

@property (nonatomic) BOOL needShowAlert;
@property (retain, nonatomic) NSMutableDictionary *requestRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)requestRecord;
- (BOOL)needShowAlert;
- (BOOL)showSyncProfileAlert;
- (void)setNeedShowAlert:(BOOL)arg0;
- (BOOL)couldShowAlertOnCurrentVC;
- (void)postSyncProfileWith:(BOOL)arg0;
- (id)alertViewControllerWith:(long long)arg0 clickedSwitchType:(long long)arg1 platformType:(unsigned long long)arg2 requestAction:(id /* block */)arg3;
- (void)showSyncProfileAlertIfNeeded;
- (void)showAlertIfNeededWithShowedCallback:(id /* block */)arg0;
- (void)setRequestRecord:(id)arg0;
- (void).cxx_destruct;

@end