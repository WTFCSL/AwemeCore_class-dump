//
//     Generated by private class-dump
//

@class NSString;

@protocol IESECWinBackService <NSObject>

@property (copy, nonatomic) NSString *coverColor;
@property (copy, nonatomic) NSString *navBarColor;
@property (nonatomic) BOOL useBackImage;

- (id)coverColor;
- (void)setCoverColor:(id)arg0;
- (void)setNavBarColor:(id)arg0;
- (id)navBarColor;
- (BOOL)useBackImage;
- (id)calculateHeaderBackViewGradient:(double)arg0;
- (void)setUseBackImage:(BOOL)arg0;

@end
