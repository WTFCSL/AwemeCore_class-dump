//
//     Generated by private class-dump
//

@class NSString, AWETeenRecorderTrackerModel;

@interface AWERepoTeenModeModel : NSObject <ACCRepositoryTrackContextDeprecated> {
    BOOL _isTeenMode;
    NSString *_teenInitTabCode;
    NSString *_minorModeType;
    AWETeenRecorderTrackerModel *_teenTrackerModel;
}

@property (nonatomic) BOOL isTeenMode;
@property (copy, nonatomic) NSString *teenInitTabCode;
@property (copy, nonatomic) NSString *minorModeType;
@property (retain, nonatomic) AWETeenRecorderTrackerModel *teenTrackerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTeenMode;
- (id)acc_referExtraParams;
- (id)minorModeType;
- (void)setMinorModeType:(id)arg0;
- (void)setIsTeenMode:(BOOL)arg0;
- (id)teenTrackerModel;
- (void)setTeenInitTabCode:(id)arg0;
- (void)setTeenTrackerModel:(id)arg0;
- (id)teenInitTabCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end