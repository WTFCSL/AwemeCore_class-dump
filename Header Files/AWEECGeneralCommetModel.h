//
//     Generated by private class-dump
//

@class UIImage, NSArray, NSString;

@interface AWEECGeneralCommetModel : NSObject {
    BOOL _hasAnchorType;
    UIImage *_anchorIcon;
    NSArray *_iconImageURLs;
    NSString *_anchorType;
    unsigned long long _businessType;
}

@property (retain, nonatomic) UIImage *anchorIcon;
@property (copy, nonatomic) NSArray *iconImageURLs;
@property (nonatomic) BOOL hasAnchorType;
@property (copy, nonatomic) NSString *anchorType;
@property (nonatomic) unsigned long long businessType;

- (id)iconImageURLs;
- (void)setAnchorIcon:(id)arg0;
- (void)setBusinessType:(unsigned long long)arg0;
- (id)anchorIcon;
- (void)setIconImageURLs:(id)arg0;
- (unsigned long long)businessType;
- (id)anchorType;
- (void).cxx_destruct;
- (BOOL)hasAnchorType;
- (void)setAnchorType:(id)arg0;
- (void)setHasAnchorType:(BOOL)arg0;

@end
