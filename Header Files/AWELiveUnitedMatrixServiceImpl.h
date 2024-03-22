//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEIMSearchEngineProtocol;

@interface AWELiveUnitedMatrixServiceImpl : NSObject <IESLiveUnitedMatrixService> {
    id<AWEIMSearchEngineProtocol> _searchEngine;
    id /* block */ _completed;
}

@property (retain, nonatomic) id<AWEIMSearchEngineProtocol> searchEngine;
@property (copy, nonatomic) id /* block */ completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)joinMatrixWithToken:(id)arg0 completed:(id /* block */)arg1;
- (void)setSearchEngine:(id)arg0;
- (void)beginSearchFriend:(id)arg0 completed:(id /* block */)arg1;
- (void)inviteFriendWith:(id)arg0 completed:(id /* block */)arg1;
- (void)setCompleted:(id /* block */)arg0;
- (id)init;
- (id /* block */)completed;
- (void).cxx_destruct;
- (id)searchEngine;

@end
