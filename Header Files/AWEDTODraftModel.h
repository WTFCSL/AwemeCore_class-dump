//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTODraftModel : MTLModel <MTLJSONSerializing> {
    NSString *_draftId;
    NSString *_userId;
    double _saveTime;
    long long _editFrequency;
    long long _savePolicy;
    long long _draftIdForReport;
    NSString *_videoPath;
}

@property (copy, nonatomic) NSString *draftId;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) double saveTime;
@property (nonatomic) long long editFrequency;
@property (nonatomic) long long savePolicy;
@property (nonatomic) long long draftIdForReport;
@property (copy, nonatomic) NSString *videoPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)draftId;
- (void)setDraftId:(id)arg0;
- (double)saveTime;
- (void)setSaveTime:(double)arg0;
- (long long)editFrequency;
- (void)setEditFrequency:(long long)arg0;
- (long long)draftIdForReport;
- (void)setDraftIdForReport:(long long)arg0;
- (long long)savePolicy;
- (void)setSavePolicy:(long long)arg0;
- (void).cxx_destruct;
- (id)userId;
- (void)setUserId:(id)arg0;
- (id)videoPath;
- (void)setVideoPath:(id)arg0;

@end
