//
//     Generated by private class-dump
//

@class HTSLiveCommonCardArea, NSArray, NSDictionary, NSString, UIView;
@protocol IESLiveSliceXInstanceInterface;

@interface IESLiveTopRightSliceView : UIView <IESLiveSliceXEventForwardDelegate> {
    HTSLiveCommonCardArea *_cardArea;
    UIView *_sliceXView;
    double _cardWidth;
    NSDictionary *_containerDic;
    NSArray *_fieldsArray;
    id<IESLiveSliceXInstanceInterface> _sliceXInstance;
}

@property (retain, nonatomic) HTSLiveCommonCardArea *cardArea;
@property (retain, nonatomic) UIView *sliceXView;
@property (nonatomic) double cardWidth;
@property (retain, nonatomic) NSDictionary *containerDic;
@property (retain, nonatomic) NSArray *fieldsArray;
@property (retain, nonatomic) id<IESLiveSliceXInstanceInterface> sliceXInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSliceXInstance:(id)arg0;
- (id)sliceXInstance;
- (void)triggerSliceXEvent:(id)arg0;
- (id)sliceXView;
- (void)setSliceXView:(id)arg0;
- (id)initWithCardArea:(id)arg0;
- (id)cardArea;
- (void)setCardArea:(id)arg0;
- (void)updateCardArea:(id)arg0;
- (void)setFieldsArray:(id)arg0;
- (void)setContainerDic:(id)arg0;
- (id)containerDic;
- (void)updateFoldState:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setup;
- (id)fieldsArray;
- (double)cardWidth;
- (void)setCardWidth:(double)arg0;

@end