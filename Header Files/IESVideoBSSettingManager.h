//
//     Generated by private class-dump
//

@protocol IESVideoBSNetworkDelegate;

@interface IESVideoBSSettingManager : NSObject {
    id<IESVideoBSNetworkDelegate> _delegate;
}

@property (weak, nonatomic) id<IESVideoBSNetworkDelegate> delegate;

+ (id)sharedInstance;

- (void)configSettingsWithModel:(id)arg0;
- (void)requestSettingWithURLString:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
