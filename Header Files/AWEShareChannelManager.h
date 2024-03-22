//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEShareChannelManager : HTSService <AWEShareChannelManager> {
    NSMutableDictionary *_channels;
    NSMutableArray *_channelNames;
}

@property (retain, nonatomic) NSMutableDictionary *channels;
@property (retain, nonatomic) NSMutableArray *channelNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)channelForType:(long long)arg0;
- (id)channelNames;
- (void)setChannelNames:(id)arg0;
- (void)registerShareChannelType:(long long)arg0 options:(unsigned long long)arg1;
- (void)onServiceInitForIsolation;
- (id)sortedShareCountFromArray:(id)arg0;
- (id)sortedChannelsFromChannels:(id)arg0 sorting:(id)arg1;
- (void)addOrReplaceShareChannel:(id)arg0;
- (void)removeShareChannelForType:(long long)arg0;
- (id)channelsSupportShareType:(long long)arg0 inChannels:(id)arg1;
- (unsigned long long)optionForChannel:(long long)arg0;
- (id)sortedChannelsFromFirstRowChannels:(id)arg0;
- (id)forceInsertChannels:(id)arg0 isVideoShare:(BOOL)arg1 isFirstRow:(BOOL)arg2;
- (id)sortedChannelsFromSecondRowChannels:(id)arg0;
- (id)channels;
- (void)setChannels:(id)arg0;
- (void).cxx_destruct;
- (id)allChannels;

@end