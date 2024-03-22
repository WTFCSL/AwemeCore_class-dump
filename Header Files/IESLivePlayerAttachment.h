//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveSEIReceiver, IESLiveStreamAbnormalAction, UIView;
@protocol IESLivePaidStreamProvider;

@interface IESLivePlayerAttachment : NSObject {
    NSMutableDictionary *_tagAttributes;
}

@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;
@property (nonatomic) long long playerSourceType;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } customFrame;
@property (retain, nonatomic) UIView *bizView;
@property (retain, nonatomic) UIView *bizViewSuperView;
@property (retain, nonatomic) IESLiveSEIReceiver *seiReceiver;
@property (retain, nonatomic) IESLiveStreamAbnormalAction *abnormalAction;
@property (nonatomic) BOOL isInRoom;
@property (retain, nonatomic) NSMutableDictionary *tagAttributes;

- (void)setPlayerSourceType:(long long)arg0;
- (id)paidStream;
- (void)setPaidStream:(id)arg0;
- (void)setBizView:(id)arg0;
- (id)abnormalAction;
- (id)seiReceiver;
- (void)setupSEIReceiverWithDIContext:(id)arg0 withPlayer:(id)arg1;
- (id)bizView;
- (void)setCustomFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBizViewSuperView:(id)arg0;
- (void)removeAllTagAttributesWithCallTrace:(id)arg0;
- (void)updateAttributesInfo:(id)arg0 callTrace:(id)arg1;
- (void)setIsInRoom:(BOOL)arg0;
- (BOOL)isInRoom;
- (long long)playerSourceType;
- (id)tagAttributes;
- (id)tagAttributesInfoWithCallTrace:(id)arg0;
- (void)setTagAttributes:(id)arg0;
- (id)bizViewSuperView;
- (void)setAbnormalAction:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customFrame;
- (void)setSeiReceiver:(id)arg0;
- (void)setupSEIReceiverWithPlayer:(id)arg0;
- (void).cxx_destruct;

@end
