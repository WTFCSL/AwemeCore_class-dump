//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWENearbyLifeDualRoomProductInfo : AWEBaseApiModel {
    AWEURLModel *_firstIcon;
    NSString *_firstTag;
    NSString *_title;
    long long _uiStyle;
}

@property (retain, nonatomic) AWEURLModel *firstIcon;
@property (copy, nonatomic) NSString *firstTag;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long uiStyle;

+ (BOOL)automaticallyDefaultMapping;
+ (id)firstIconJSONTransformer;

- (void)setFirstIcon:(id)arg0;
- (id)firstTag;
- (void)setFirstTag:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setUiStyle:(long long)arg0;
- (long long)uiStyle;
- (id)firstIcon;
- (void)setTitle:(id)arg0;

@end
