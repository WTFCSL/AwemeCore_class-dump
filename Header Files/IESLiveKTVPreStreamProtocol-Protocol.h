//
//     Generated by private class-dump
//

@class IESLiveBigPartyPreStreamController;
@protocol IESLiveBigPartyPreStreamDataSource;

@protocol IESLiveKTVPreStreamProtocol <NSObject>

@property (weak, nonatomic) id<IESLiveBigPartyPreStreamDataSource> dataSource;
@property (weak, nonatomic) IESLiveBigPartyPreStreamController *bigPartyController;

- (id)bigPartyController;
- (void)setBigPartyController:(id)arg0;
- (void)playerDidReset;
- (void)roomDidEnd;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setup;
- (void)prepareForReuse;
- (void)updateModel:(id)arg0;

@end
