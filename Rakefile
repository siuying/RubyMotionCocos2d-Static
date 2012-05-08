$:.unshift("/Library/RubyMotion/lib")
require 'motion/project'
require 'motion-cocoapods'

Motion::Project::App.setup do |app|
  # Use `rake config' to see complete project settings.
  app.name = 'Cocos2dDemo'
  app.frameworks += ["OpenGLES", "OpenAL", "AVFoundation", "AudioToolbox", "QuartzCore"]
  app.libs << "/usr/lib/libz.dylib"
  app.vendor_project('vendor/cocos2d-iphone', :static, :headers_dir => 'include')
end
