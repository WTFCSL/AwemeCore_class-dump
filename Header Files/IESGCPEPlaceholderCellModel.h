//
//     Generated by private class-dump
//

@class NSString, IESGCPEFirstReplyCellModel;

@interface IESGCPEPlaceholderCellModel : NSObject <IESGCPEDetailCellModel> {
    long long _type;
    double _viewWidth;
    IESGCPEFirstReplyCellModel *_parentReplyModel;
    long long _placeholderType;
}

@property (retain, nonatomic) IESGCPEFirstReplyCellModel *parentReplyModel;
@property (nonatomic) long long placeholderType;
@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) double viewWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewWidth:(double)arg0;
- (id)parentReplyModel;
- (void)setParentReplyModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)reuseIdentifier;
- (long long)placeholderType;
- (void)setPlaceholderType:(long long)arg0;
- (double)viewWidth;

@end
