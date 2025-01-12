//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface PuzzleLatchParamModel : NSObject {
    UIView<IESLiveHybridContainerProtocol> *_realContainer;
    NSString *_latchID;
    NSString *_url;
    NSDictionary *_globalProps;
    NSDictionary *_initialProps;
}

@property (weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *realContainer;
@property (copy, nonatomic) NSString *latchID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *initialProps;

- (void)setGlobalProps:(id)arg0;
- (id)globalProps;
- (id)latchID;
- (void)setLatchID:(id)arg0;
- (id)initialProps;
- (void)setInitialProps:(id)arg0;
- (void)setRealContainer:(id)arg0;
- (id)realContainer;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;

@end
