//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEPOIUgcBottomBarModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasUserRated;
    NSArray *_backgroundImageUrls;
    NSArray *_darkBackgrounImageUrls;
    NSArray *_icons;
    NSString *_title;
}

@property (copy, nonatomic) NSArray *backgroundImageUrls;
@property (copy, nonatomic) NSArray *darkBackgrounImageUrls;
@property (nonatomic) BOOL hasUserRated;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasUserRated;
- (void)setHasUserRated:(BOOL)arg0;
- (id)backgroundImageUrls;
- (void)setBackgroundImageUrls:(id)arg0;
- (id)darkBackgrounImageUrls;
- (void)setDarkBackgrounImageUrls:(id)arg0;
- (void).cxx_destruct;
- (void)setIcons:(id)arg0;
- (id)icons;
- (id)title;
- (void)setTitle:(id)arg0;

@end