//
//     Generated by private class-dump
//

@class AWESearchGoodsTagInfoConfiguration;

@interface AWESearchGoodsTagInfoView : UIView {
    AWESearchGoodsTagInfoConfiguration *_config;
}

@property (retain, nonatomic) AWESearchGoodsTagInfoConfiguration *config;

+ (struct CGSize { double x0; double x1; })sizeForTagInfos:(id)arg0 config:(id /* block */)arg1;

- (id)initWithTagInfos:(id)arg0 config:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)downloadTagWithTagInfos:(id)arg0 completion:(id /* block */)arg1;
- (id)initWithTagInfos:(id)arg0 config:(id /* block */)arg1;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end