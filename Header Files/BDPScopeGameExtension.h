//
//     Generated by private class-dump
//

@class NSString;

@interface BDPScopeGameExtension : NSObject <NSCopying> {
    BOOL _hasMark;
    BOOL _isOpen;
    NSString *_title_hg;
    NSString *_subTitle;
    NSString *_fullTitle;
    double _cellHeight_hg;
}

@property (copy, nonatomic) NSString *title_hg;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *fullTitle;
@property (nonatomic) BOOL hasMark;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) double cellHeight_hg;

- (BOOL)hasMark;
- (void)setHasMark:(BOOL)arg0;
- (void)setTitle_hg:(id)arg0;
- (id)title_hg;
- (double)cellHeight_hg;
- (void)setCellHeight_hg:(double)arg0;
- (void)setIsOpen:(BOOL)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isOpen;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)fullTitle;
- (void)setFullTitle:(id)arg0;

@end