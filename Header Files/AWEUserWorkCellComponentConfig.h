//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserWorkCellComponentConfig : NSObject <AWEUserWorkCellComponentConfigProtocol> {
    BOOL showDateView;
    BOOL _shouldShowDouGuideTag;
    BOOL _disableDynamicCover;
    BOOL _justShowCover;
    BOOL _isFromHome;
    id /* block */ enterUserModelBlock;
    id /* block */ currentUserBlock;
    long long userWorkType;
    long long scene;
    long long _layoutStyle;
    unsigned long long _sortType;
}

@property (nonatomic) long long layoutStyle;
@property (nonatomic) unsigned long long sortType;
@property (nonatomic) BOOL shouldShowDouGuideTag;
@property (nonatomic) BOOL disableDynamicCover;
@property (nonatomic) BOOL justShowCover;
@property (nonatomic) BOOL isFromHome;
@property (copy, nonatomic) id /* block */ enterUserModelBlock;
@property (copy, nonatomic) id /* block */ currentUserBlock;
@property (nonatomic) long long userWorkType;
@property (nonatomic) long long scene;
@property (nonatomic) BOOL showDateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShowDateView:(BOOL)arg0;
- (void)setCurrentUserBlock:(id /* block */)arg0;
- (void)setUserWorkType:(long long)arg0;
- (BOOL)disableDynamicCover;
- (void)setDisableDynamicCover:(BOOL)arg0;
- (void)setEnterUserModelBlock:(id /* block */)arg0;
- (void)setIsFromHome:(BOOL)arg0;
- (void)setJustShowCover:(BOOL)arg0;
- (BOOL)shouldShowDouGuideTag;
- (void)setShouldShowDouGuideTag:(BOOL)arg0;
- (long long)userWorkType;
- (id /* block */)enterUserModelBlock;
- (id /* block */)currentUserBlock;
- (BOOL)justShowCover;
- (BOOL)isFromHome;
- (long long)layoutStyle;
- (void)setScene:(long long)arg0;
- (void)setLayoutStyle:(long long)arg0;
- (void).cxx_destruct;
- (long long)scene;
- (unsigned long long)sortType;
- (void)setSortType:(unsigned long long)arg0;
- (BOOL)showDateView;

@end
