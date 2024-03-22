//
//     Generated by private class-dump
//

@class AWERecordAuthViewHolder;
@protocol ACCRecorderViewContainer;

@interface AWEShowAuthLayoutAction : NSObject <FPLayoutAction> {
    AWERecordAuthViewHolder *_authViewHolder;
    id<ACCRecorderViewContainer> _viewContainer;
}

@property (retain, nonatomic) AWERecordAuthViewHolder *authViewHolder;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;

+ (void)layoutWithViewContainer:(id)arg0 viewHolder:(id)arg1;
+ (void)showUploadIn:(id)arg0 viewHolder:(id)arg1;
+ (void)showDYCodeIn:(id)arg0 viewHolder:(id)arg1;
+ (void)hideDYCodeIn:(id)arg0;

- (id)authViewHolder;
- (void)setAuthViewHolder:(id)arg0;
- (void).cxx_destruct;
- (void)layout;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
