//
//     Generated by private class-dump
//

@protocol AWEPublishTaskContextProtocol;

@protocol AWEPublishStageProtocol <NSObject>

@property (nonatomic) long long status;
@property (nonatomic) long long type;
@property (readonly, weak, nonatomic) id<AWEPublishTaskContextProtocol> task;

- (void)run;
- (long long)status;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setStatus:(long long)arg0;
- (id)task;

@end
