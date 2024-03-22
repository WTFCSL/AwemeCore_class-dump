//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESLiveNativeAppPermissionIntroModel : NSObject {
    BOOL _showYellowPoint;
    BOOL _permit;
    BOOL _showIntroPanel;
    BOOL _showNewPanel;
    int _permitStatus;
    NSString *_introImageURI;
    NSString *_talentH5URL;
    NSString *_helpURL;
    NSArray *_permissionStatusInfo;
}

@property (copy, nonatomic) NSString *introImageURI;
@property (copy, nonatomic) NSString *talentH5URL;
@property (copy, nonatomic) NSString *helpURL;
@property (nonatomic) BOOL showYellowPoint;
@property (nonatomic) BOOL permit;
@property (nonatomic) BOOL showIntroPanel;
@property (nonatomic) BOOL showNewPanel;
@property (nonatomic) int permitStatus;
@property (retain, nonatomic) NSArray *permissionStatusInfo;
@property (readonly, nonatomic) BOOL isHasTimorPermit;

- (BOOL)permit;
- (BOOL)showYellowPoint;
- (id)introImageURI;
- (id)permissionStatusInfo;
- (void)setTalentH5URL:(id)arg0;
- (void)setIntroImageURI:(id)arg0;
- (void)setShowYellowPoint:(BOOL)arg0;
- (void)setPermit:(BOOL)arg0;
- (void)setPermissionStatusInfo:(id)arg0;
- (BOOL)showIntroPanel;
- (void)setShowIntroPanel:(BOOL)arg0;
- (BOOL)showNewPanel;
- (void)setShowNewPanel:(BOOL)arg0;
- (int)permitStatus;
- (void)setPermitStatus:(int)arg0;
- (id)getIntroInfoDict;
- (id)talentH5URL;
- (void).cxx_destruct;
- (id)helpURL;
- (void)setHelpURL:(id)arg0;
- (id)initWithResponseData:(id)arg0;

@end
