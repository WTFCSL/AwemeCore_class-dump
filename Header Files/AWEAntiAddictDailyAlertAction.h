//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAntiAddictDailyAlertAction : AWEAntiAddictBaseAction <AWEAntiAddictDailyAlertDelegate> {
    BOOL _isDay;
    unsigned long long _viewType;
}

@property (nonatomic) unsigned long long viewType;
@property (nonatomic) BOOL isDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleName;

- (id)updatedDataOnBegin;
- (void)dailyAlert:(id)arg0 didShowWithSuccess:(BOOL)arg1;
- (void)dailyAlertDidDismiss:(id)arg0;
- (BOOL)shouldUseNewStyle;
- (void)end;
- (void)begin;
- (unsigned long long)viewType;
- (BOOL)isDay;
- (void)setViewType:(unsigned long long)arg0;
- (void)setIsDay:(BOOL)arg0;

@end
