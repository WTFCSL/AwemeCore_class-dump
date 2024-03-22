//
//     Generated by private class-dump
//

@class DitoPageContext, NSString, NSArray, DitoStyle, NSNumber;

@protocol DitoComponentViewModel <NSObject, DitoScrollDelegate, DitoComponentStickyProtocol, DitoHalfContainerDelegateProtocol, DitoComponentLayout>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *subType;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) DitoStyle *style;
@property (retain, nonatomic) NSArray *eventList;
@property (weak, nonatomic) DitoPageContext *context;
@property (nonatomic) BOOL isSticked;
@property (nonatomic) BOOL enableEventThrough;
@property (retain, nonatomic) NSNumber *scrollBodyViewOffsetYWhenStickToTop;
@property (nonatomic) BOOL isCompleteVisible;

- (void)setEventList:(id)arg0;
- (id)eventList;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (BOOL)enableEventThrough;
- (void)setEnableEventThrough:(BOOL)arg0;
- (id)componentReuseIdentifier;
- (BOOL)isSticked;
- (void)setIsSticked:(BOOL)arg0;
- (id)scrollBodyViewOffsetYWhenStickToTop;
- (BOOL)isCompleteVisible;
- (void)setIsCompleteVisible:(BOOL)arg0;
- (void)setScrollBodyViewOffsetYWhenStickToTop:(id)arg0;
- (id)style;
- (void)setSubType:(id)arg0;
- (void)setContext:(id)arg0;
- (id)type;
- (id)subType;
- (void)setTag:(id)arg0;
- (id)tag;
- (void)setType:(id)arg0;
- (id)context;
- (void)setStyle:(id)arg0;

@optional

- (id)customTag;
- (void)pageWillShow;
- (void)updateNode:(id)arg0;
- (void)bindStateAndAction;
- (void)didLoadPageModel:(id)arg0;
- (void)didEndReload;
- (void)receiveNaviBarStatusModify:(id)arg0;
- (id)trackParamsForAutoTrackWithEventName:(id)arg0 params:(id)arg1;
- (void)componentViewDidCompleteShow;
- (BOOL)componentShouldHandleAutoTrackWithEventName:(id)arg0 params:(id)arg1;
- (void)postEvent:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)componentViewWillShow;
- (void)componentViewDidEndShow;
- (void)pageWillEndShow;
- (void)componentViewWillEndShow;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })componentInset;
- (void)refreshNode:(id)arg0;
- (id)extraComponentTrackParams;
- (void)pageDidShow;
- (void)pageDidEndShow;
- (void)stayTimeRecordStart;
- (void)stayTimeRecordPause;
- (BOOL)setComponentLongestStage:(long long)arg0;
- (void)setComponentErrorStage:(long long)arg0 message:(id)arg1 errorType:(id)arg2;
- (id)componentStageStringOf:(long long)arg0;
- (void)removeNode:(id)arg0;

@end