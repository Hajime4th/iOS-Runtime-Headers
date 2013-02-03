/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject {
    NSString *_path;
    MPAVItem *_rawItem;
    double _startTime;
    double _stopTime;
    NSString *_videoID;
}

@property(retain) NSString * path;
@property(retain) MPAVItem * rawItem;
@property double startTime;
@property double stopTime;
@property(copy) NSString * videoID;

- (void)dealloc;
- (id)path;
- (id)rawItem;
- (void)setPath:(id)arg1;
- (void)setRawItem:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (void)setVideoID:(id)arg1;
- (double)startTime;
- (double)stopTime;
- (id)videoID;

@end