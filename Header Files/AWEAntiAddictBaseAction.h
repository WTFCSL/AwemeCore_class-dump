//
//     Generated by private class-dump
//

@class NSDictionary, NSString, NSDate;

@interface AWEAntiAddictBaseAction : NSObject <AWEAntiAddictAction, AWEAntiAddictLogProtocol> {
    BOOL _triggerImmediately;
    NSString *_name;
    long long _priority;
    NSDate *_expiredDate;
    long long _listenerType;
    id /* block */ endCallback;
    NSDictionary *_preparedData;
}

@property (retain, nonatomic) NSDictionary *preparedData;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSDate *expiredDate;
@property (readonly, nonatomic) BOOL triggerImmediately;
@property (readonly, nonatomic) long long listenerType;
@property (copy, nonatomic) id /* block */ endCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleName;

- (id)expiredDate;
- (BOOL)triggerImmediately;
- (long long)listenerType;
- (id)updatedDataOnPrepare;
- (id)preparedData;
- (id)updatedDataOnRevoke;
- (id)realUpdatedDataOnBegin;
- (id)realUpdatedDataOnEnd;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)willChangeToAction:(id)arg0;
- (void)didChangeToAction:(id)arg0;
- (void)willChangefromAction:(id)arg0;
- (void)didChangefromAction:(id)arg0;
- (id)initWithName:(id)arg0 expiredDate:(id)arg1 triggerImmediately:(BOOL)arg2 listenerType:(long long)arg3 PreparedData:(id)arg4;
- (id)showedRecordMapByAppendRecord:(id)arg0;
- (BOOL)isActionInActiveStatus;
- (void)setPreparedData:(id)arg0;
- (void)end;
- (void)begin;
- (void).cxx_destruct;
- (void)prepare;
- (id)description;
- (long long)priority;
- (id)name;
- (void)revoke;
- (id /* block */)endCallback;
- (void)setEndCallback:(id /* block */)arg0;

@end
