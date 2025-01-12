//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEECOMIMRateServiceUIConfigModel : NSObject {
    BOOL _isGift;
    BOOL _isStack;
    NSString *_title;
    double _iconWidth;
    double _iconHeight;
    NSArray *_iconList;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isGift;
@property (nonatomic) BOOL isStack;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (copy, nonatomic) NSArray *iconList;

- (id)iconList;
- (void)setIconList:(id)arg0;
- (id)initWithUIConfigDict:(id)arg0;
- (void)setIsGift:(BOOL)arg0;
- (void)setIsStack:(BOOL)arg0;
- (void).cxx_destruct;
- (id)title;
- (BOOL)isGift;
- (double)iconWidth;
- (BOOL)isStack;
- (void)setTitle:(id)arg0;
- (double)iconHeight;
- (void)setIconWidth:(double)arg0;
- (void)setIconHeight:(double)arg0;

@end
