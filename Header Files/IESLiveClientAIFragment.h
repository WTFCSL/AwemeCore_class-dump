//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol IESLiveAIService, IESLiveClientAIService, IESLiveClientAIInjector;

@interface IESLiveClientAIFragment : IESLiveRoomComponent <IESLiveClientAIRouter> {
    id<IESLiveClientAIService> _clientAIService;
    id<IESLiveClientAIInjector> _clientAIInjector;
    NSMutableArray *_tagArray;
    id<IESLiveAIService> _aiService;
}

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) id<IESLiveClientAIInjector> clientAIInjector;
@property (retain, nonatomic) NSMutableArray *tagArray;
@property (retain, nonatomic) id<IESLiveAIService> aiService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (id)aiService;
- (void)setAiService:(id)arg0;
- (id)tagArray;
- (void)setTagArray:(id)arg0;
- (id)clientAIInjector;
- (void)setClientAIInjector:(id)arg0;
- (id)clientAIService;
- (void)setClientAIService:(id)arg0;
- (void)updateCurrentRoomV3tag;
- (void).cxx_destruct;
- (void)dealloc;

@end