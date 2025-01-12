//
//     Generated by private class-dump
//

@class NSString, IESECTextWithIconElement;

@interface IESECGoodsDetailBottomNewCountDownTipCell : IESECGoodsDetailBottomNewTipCell <IESECGoodsDetailViewUpdateMessage> {
    IESECTextWithIconElement *_tipModel_;
    NSString *_template;
    NSString *_pageIdentifier;
}

@property (retain, nonatomic) IESECTextWithIconElement *tipModel;
@property (copy, nonatomic) NSString *template;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tipModel;
- (void)setTipModel:(id)arg0;
- (void)goodsDetailActivityDidUpdateCountdown:(id)arg0 goodsDetailUID:(id)arg1;
- (void)goodsDetailActivityStateDidChanged:(long long)arg0 goodsDetailUID:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 tipModel:(id)arg1 template:(id)arg2 identifier:(id)arg3;
- (void)updateContent;
- (void).cxx_destruct;
- (void)dealloc;
- (id)template;
- (void)setTemplate:(id)arg0;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;

@end
