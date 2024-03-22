//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol AWESharkLynxContainerViewDelegate, AWESharkLynxModelProtocol;

@protocol AWESharkLynxContainerProtocol <NSObject>

@property (nonatomic) BOOL isReuse;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) id<AWESharkLynxModelProtocol> lynxModel;
@property (readonly, copy, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) id<AWESharkLynxContainerViewDelegate> lynxContainerDelegate;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)findViewWithName:(id)arg0;
- (id)extraParams;
- (id)lynxModel;
- (void)setLynxModel:(id)arg0;
- (void)lynxViewWillShow;
- (void)lynxViewWillHide;
- (BOOL)isReuse;
- (void)setLynxContainerDelegate:(id)arg0;
- (void)setIsReuse:(BOOL)arg0;
- (void)updateWithLynxUrl:(id)arg0 rawData:(id)arg1 cardType:(long long)arg2 extraParams:(id)arg3;
- (id)lynxContainerDelegate;
- (void)setSessionId:(id)arg0;
- (id)sessionId;

@end