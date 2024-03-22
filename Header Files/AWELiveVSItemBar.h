//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSNumber;

@interface AWELiveVSItemBar : AWEBaseApiModel {
    NSDictionary *_iconDark;
    NSDictionary *_iconLight;
    NSString *_title;
    NSString *_seperator;
    NSString *_detail;
    NSNumber *_watchInfoPv;
    NSString *_watchInfoHeat;
    NSNumber *_collectionId;
    NSNumber *_tabID;
    NSString *_contentType;
}

@property (retain, nonatomic) NSDictionary *iconDark;
@property (retain, nonatomic) NSDictionary *iconLight;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *seperator;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) NSNumber *watchInfoPv;
@property (retain, nonatomic) NSString *watchInfoHeat;
@property (retain, nonatomic) NSNumber *collectionId;
@property (retain, nonatomic) NSNumber *tabID;
@property (retain, nonatomic) NSString *contentType;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setTabID:(id)arg0;
- (id)iconDark;
- (void)setIconDark:(id)arg0;
- (id)iconLight;
- (void)setIconLight:(id)arg0;
- (id)seperator;
- (void)setSeperator:(id)arg0;
- (id)watchInfoPv;
- (void)setWatchInfoPv:(id)arg0;
- (id)watchInfoHeat;
- (void)setWatchInfoHeat:(id)arg0;
- (void)setContentType:(id)arg0;
- (id)contentType;
- (void)setDetail:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)detail;
- (void)setTitle:(id)arg0;
- (id)collectionId;
- (void)setCollectionId:(id)arg0;
- (id)tabID;

@end