//
//     Generated by private class-dump
//

@class HTSLiveTrayEffectMessage, NSAttributedString, NSArray;
@protocol IESLiveEffectTrayComboDelegate;

@interface IESLiveMessageTrayEffectModel : NSObject {
    id<IESLiveEffectTrayComboDelegate> _delegate;
    NSAttributedString *_content;
    double _contentHeight;
    HTSLiveTrayEffectMessage *_message;
    NSArray *_comboInfo;
}

@property (weak, nonatomic) id<IESLiveEffectTrayComboDelegate> delegate;
@property (retain, nonatomic) NSAttributedString *content;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) HTSLiveTrayEffectMessage *message;
@property (retain, nonatomic) NSArray *comboInfo;

- (id)comboInfo;
- (void)setComboInfo:(id)arg0;
- (void)setMessage:(id)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)content;
- (id)message;
- (id)delegate;
- (void)setContent:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setContentHeight:(double)arg0;

@end
