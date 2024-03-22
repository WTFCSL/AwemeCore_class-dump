//
//     Generated by private class-dump
//

@class NSString;

@interface IESFormatLoadingFragment : IESFormatComponentBase <IESFormatLoadingService> {
    unsigned long long _currentType;
}

@property (nonatomic) unsigned long long currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentType:(unsigned long long)arg0;
- (void)processFormatExit:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)showLoadingWithType:(unsigned long long)arg0;
- (void)hideLoadingWithType:(unsigned long long)arg0;
- (BOOL)satisfyHideCondition;
- (unsigned long long)currentType;

@end