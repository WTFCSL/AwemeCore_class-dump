//
//     Generated by private class-dump
//

@class NSString, UIColor, NSProgress;

@interface IESLiveToastLoadingConfig : NSObject {
    BOOL _canBeClosed;
    BOOL _canBeClosedByTapBackground;
    NSString *_title;
    NSString *_imageName;
    NSString *_webpName;
    NSString *_lottieName;
    UIColor *_tintColor;
    NSProgress *_loadingProgress;
    id /* block */ _closeActionBlock;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *webpName;
@property (copy, nonatomic) NSString *lottieName;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSProgress *loadingProgress;
@property (nonatomic) BOOL canBeClosed;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (nonatomic) BOOL canBeClosedByTapBackground;

+ (id)defaultConfig;

- (id)lottieName;
- (void)setLottieName:(id)arg0;
- (id /* block */)closeActionBlock;
- (void)setCloseActionBlock:(id /* block */)arg0;
- (void)setCanBeClosed:(BOOL)arg0;
- (void)setCanBeClosedByTapBackground:(BOOL)arg0;
- (void)setWebpName:(id)arg0;
- (id)webpName;
- (BOOL)p_isToastLoadingConfigValid;
- (BOOL)canBeClosed;
- (BOOL)canBeClosedByTapBackground;
- (void)setTintColor:(id)arg0;
- (void).cxx_destruct;
- (void)setLoadingProgress:(id)arg0;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (id)loadingProgress;
- (id)tintColor;
- (id)title;
- (void)setTitle:(id)arg0;

@end
