//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface HGAlertControllerThemeBase : NSObject <HGAppearance>

@property (copy, nonatomic) NSArray *hg_styleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hg_styleForCategory:(id)arg0;

- (void)setHg_styleCategories:(id)arg0;
- (void)applyAppearance;
- (id)hg_styleCategories;

@end
