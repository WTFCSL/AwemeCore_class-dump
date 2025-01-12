//
//     Generated by private class-dump
//

@class NSString, IESGCPRequestDispatchStrategy;

@interface IESGCPExplainCardNoticeMessage : NSObject {
    long long _type;
    long long _introduceType;
    IESGCPRequestDispatchStrategy *_dispatchStrategy;
    NSString *_updatedData;
}

@property (nonatomic) long long type;
@property (nonatomic) long long introduceType;
@property (retain, nonatomic) IESGCPRequestDispatchStrategy *dispatchStrategy;
@property (copy, nonatomic) NSString *updatedData;

- (long long)introduceType;
- (void)setIntroduceType:(long long)arg0;
- (id)dispatchStrategy;
- (void)setDispatchStrategy:(id)arg0;
- (id)updatedData;
- (void)setUpdatedData:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;

@end
