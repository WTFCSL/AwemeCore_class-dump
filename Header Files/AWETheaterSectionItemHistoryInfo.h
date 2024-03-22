//
//     Generated by private class-dump
//

@class NSString;

@interface AWETheaterSectionItemHistoryInfo : MTLModel <MTLJSONSerializing> {
    BOOL _hasUpdate;
    long long _progress;
    NSString *_updateText;
    NSString *_watchText;
    long long _longVideoTag;
    NSString *_awemeID;
}

@property (nonatomic) long long progress;
@property (nonatomic) BOOL hasUpdate;
@property (copy, nonatomic) NSString *updateText;
@property (copy, nonatomic) NSString *watchText;
@property (nonatomic) long long longVideoTag;
@property (copy, nonatomic) NSString *awemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (long long)longVideoTag;
- (void)setLongVideoTag:(long long)arg0;
- (BOOL)hasUpdate;
- (void)setHasUpdate:(BOOL)arg0;
- (void)setUpdateText:(id)arg0;
- (id)watchText;
- (void)setWatchText:(id)arg0;
- (void).cxx_destruct;
- (long long)progress;
- (void)setProgress:(long long)arg0;
- (id)updateText;

@end
