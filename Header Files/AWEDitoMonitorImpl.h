//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDitoMonitorImpl : NSObject <DitoMonitorProtocol> {
    BOOL _isDoubeReport;
}

@property (nonatomic) BOOL isDoubeReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorEvent:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)monitorTeaEvent:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (BOOL)isDoubeReport;
- (void)setIsDoubeReport:(BOOL)arg0;

@end
