//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIAwemeStatusSyncUtil : NSObject {
    BOOL _hasDetailVC;
    NSString *_handle;
}

@property (retain, nonatomic) NSString *handle;
@property (nonatomic) BOOL hasDetailVC;

- (void)setHasDetailVC:(BOOL)arg0;
- (void)didReceiveLifeStoreAwemeStatusChange:(id)arg0 key:(id)arg1;
- (void)didReceiveAwemeDiggStatusChange:(id)arg0;
- (BOOL)hasDetailVC;
- (void)didReceiveSingleAwemeDiggStatusChange:(id)arg0 withItemID:(id)arg1;
- (void)handleDiggWithItemID:(id)arg0 originItemID:(id)arg1 isDigg:(BOOL)arg2 onDiggSuccess:(id /* block */)arg3 onDiggError:(id /* block */)arg4;
- (id)init;
- (void).cxx_destruct;
- (void)setHandle:(id)arg0;
- (void)dealloc;
- (id)handle;

@end
