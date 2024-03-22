//
//     Generated by private class-dump
//

@class NSString;

@interface IESECInternalFlowPageStyleModel : MTLModel <MTLJSONSerializing> {
    BOOL _headerCartDisplay;
    BOOL _authorCommissionSwitch;
    long long _shadow;
    long long _bgHighLight;
    long long _slideStyle;
    long long _shouldShowMallEntrance;
    long long _immerseHeaderSearchDisplay;
    long long _commentStyle;
    long long _sameProductStyle;
    long long _sameProductSwitch;
    long long _pageInternalFlowStyle;
    NSString *_headerText;
    NSString *_noProductText;
    NSString *_noMoreProductText;
    unsigned long long _listStyle;
    long long _showCount;
    long long _searchShow;
    long long _searchShowPosition;
    long long _searchResourceStyle;
    long long _searchCardFrequency;
    long long _windowEntryPriority;
}

@property (nonatomic) long long shadow;
@property (nonatomic) long long bgHighLight;
@property (nonatomic) long long slideStyle;
@property (nonatomic) BOOL headerCartDisplay;
@property (nonatomic) long long shouldShowMallEntrance;
@property (nonatomic) long long immerseHeaderSearchDisplay;
@property (nonatomic) long long commentStyle;
@property (nonatomic) long long sameProductStyle;
@property (nonatomic) long long sameProductSwitch;
@property (nonatomic) BOOL authorCommissionSwitch;
@property (nonatomic) long long pageInternalFlowStyle;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *noProductText;
@property (copy, nonatomic) NSString *noMoreProductText;
@property (nonatomic) unsigned long long listStyle;
@property (nonatomic) long long showCount;
@property (nonatomic) long long searchShow;
@property (nonatomic) long long searchShowPosition;
@property (nonatomic) long long searchResourceStyle;
@property (nonatomic) long long searchCardFrequency;
@property (nonatomic) long long windowEntryPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)pageInternalFlowStyle;
- (void)setPageInternalFlowStyle:(long long)arg0;
- (long long)searchCardFrequency;
- (void)setSearchCardFrequency:(long long)arg0;
- (long long)windowEntryPriority;
- (void)setWindowEntryPriority:(long long)arg0;
- (long long)searchResourceStyle;
- (long long)commentStyle;
- (long long)searchShow;
- (long long)searchShowPosition;
- (long long)sameProductSwitch;
- (long long)shouldShowMallEntrance;
- (void)setShouldShowMallEntrance:(long long)arg0;
- (id)noMoreProductText;
- (BOOL)headerCartDisplay;
- (id)noProductText;
- (long long)bgHighLight;
- (long long)immerseHeaderSearchDisplay;
- (BOOL)authorCommissionSwitch;
- (void)setHeaderCartDisplay:(BOOL)arg0;
- (long long)sameProductStyle;
- (void)setBgHighLight:(long long)arg0;
- (void)setImmerseHeaderSearchDisplay:(long long)arg0;
- (void)setCommentStyle:(long long)arg0;
- (void)setSameProductStyle:(long long)arg0;
- (void)setSameProductSwitch:(long long)arg0;
- (void)setAuthorCommissionSwitch:(BOOL)arg0;
- (void)setNoProductText:(id)arg0;
- (void)setNoMoreProductText:(id)arg0;
- (void)setSearchShow:(long long)arg0;
- (void)setSearchShowPosition:(long long)arg0;
- (void)setSearchResourceStyle:(long long)arg0;
- (id)headerText;
- (void).cxx_destruct;
- (long long)shadow;
- (void)setShadow:(long long)arg0;
- (void)setHeaderText:(id)arg0;
- (long long)showCount;
- (void)setShowCount:(long long)arg0;
- (unsigned long long)listStyle;
- (void)setListStyle:(unsigned long long)arg0;
- (long long)slideStyle;
- (void)setSlideStyle:(long long)arg0;

@end