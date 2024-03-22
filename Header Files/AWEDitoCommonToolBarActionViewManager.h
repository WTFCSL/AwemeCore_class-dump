//
//     Generated by private class-dump
//

@class AWEDitoCustomDataParserImpl;

@interface AWEDitoCommonToolBarActionViewManager : NSObject {
    AWEDitoCustomDataParserImpl *_colorParser;
}

@property (retain, nonatomic) AWEDitoCustomDataParserImpl *colorParser;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (id)duxImageActionWithModel:(id)arg0 clickBlock:(id /* block */)arg1;
- (id)duxTextActionWithModel:(id)arg0 clickBlock:(id /* block */)arg1;
- (id)duxTopImageBottomTextActionWithModel:(id)arg0 clickBlock:(id /* block */)arg1;
- (void)configActionAccessibility:(id)arg0 withItem:(id)arg1;
- (id)accessibilityStringWithIconTypeString:(id)arg0;
- (id)colorParser;
- (id)imageViewWithModel:(id)arg0;
- (void)configDitoStyle:(id)arg0 toView:(id)arg1;
- (double)calculatePaddingWithWidth:(double)arg0;
- (long long)duxWeightWithString:(id)arg0;
- (id)duxImageNameWithString:(id)arg0;
- (id)getDUXActionWithItemModel:(id)arg0 clickBlock:(id /* block */)arg1;
- (void)setColorParser:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;
- (id)getColorFromString:(id)arg0;

@end