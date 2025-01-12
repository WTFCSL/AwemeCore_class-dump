//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel;

@interface AFDSocialPitayaTrackContext : NSObject {
    NSString *_event;
    unsigned long long _taskType;
    NSString *_enterFrom;
    NSString *_actionType;
    AWEAwemeModel *_model;
    NSString *_enterMethod;
    NSDictionary *_extraDic;
    long long _previousType;
}

@property (copy, nonatomic) NSString *event;
@property (nonatomic) unsigned long long taskType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *actionType;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *extraDic;
@property (nonatomic) long long previousType;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)extraDic;
- (void)setExtraDic:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (void)setActionType:(id)arg0;
- (unsigned long long)taskType;
- (id)init;
- (id)actionType;
- (long long)previousType;
- (void)setPreviousType:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setTaskType:(unsigned long long)arg0;

@end
