//
//     Generated by private class-dump
//

@class HTSEventContext, NSString;

@interface IESLiveVisibleScopeHistoryDataController : IESLiveListDataController {
    NSString *_actionType;
    unsigned long long _type;
    HTSEventContext *_trackContext;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSString *actionType;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)initWithType:(unsigned long long)arg0 trackerContext:(id)arg1;
- (id)requestParamsWithType:(unsigned long long)arg0;
- (void)trackFetchVisibleList:(id)arg0;
- (id)getActionFromVisibleScopeType:(unsigned long long)arg0;
- (void)setActionType:(id)arg0;
- (id)actionType;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;

@end
