//
//     Generated by private class-dump
//

@class AWEUserModel;

@protocol AWEProfileHeaderActionControllerProtocol <NSObject>

+ (id)idStrWithUser:(id)arg0;

@property (retain, nonatomic) AWEUserModel *user;

- (id)getUserAge;
- (BOOL)shouldShowGender;
- (BOOL)shouldShowAge;
- (BOOL)shouldShowLocation;
- (BOOL)shouldShowSchool;
- (void)setUser:(id)arg0;
- (id)user;
- (id)locationString;

@end
