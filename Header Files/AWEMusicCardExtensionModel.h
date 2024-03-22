//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEMusicCardExtensionModel : NSObject <NSCopying> {
    NSString *_activitySubtitle;
    NSString *_defaultSubtitle;
    NSArray *_lightIcon;
    NSArray *_darkIcon;
    NSString *_secId;
}

@property (retain, nonatomic) NSString *activitySubtitle;
@property (retain, nonatomic) NSString *defaultSubtitle;
@property (retain, nonatomic) NSArray *lightIcon;
@property (retain, nonatomic) NSArray *darkIcon;
@property (retain, nonatomic) NSString *secId;

- (id)darkIcon;
- (id)lightIcon;
- (void)setSecId:(id)arg0;
- (id)secId;
- (void)setLightIcon:(id)arg0;
- (void)setDarkIcon:(id)arg0;
- (id)defaultSubtitle;
- (void)setDefaultSubtitle:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)activitySubtitle;
- (void)setActivitySubtitle:(id)arg0;

@end